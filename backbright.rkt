#lang racket

(define BRIGHTNESS_FILE "/sys/class/backlight/intel_backlight/brightness")
(define MAX_BRIGHTNESS_FILE "/sys/class/backlight/intel_backlight/max_brightness")

(define max-brightness
  (call-with-input-file MAX_BRIGHTNESS_FILE
						read))

(define min-brightness (quotient max-brightness 100))

(define-values (brightness-in brightness-out)
  (open-input-output-file BRIGHTNESS_FILE))
(define current-brightness
  (read brightness-in))

(define args (vector->list (current-command-line-arguments)))
(match args
  [(list "inc")
   (fprintf brightness-out "~a\n" 
			(min max-brightness
		(max min-brightness (* current-brightness 2))))
   (flush-output brightness-out)]
  [(list "dec")
   (fprintf brightness-out "~a\n" 
          (if (<= current-brightness min-brightness)
              0
              (max min-brightness
                   (quotient current-brightness 2))))
   (flush-output brightness-out)]
  [(list "set" value)
   (define amount (string->number value))
   (unless (exact-integer? amount)
	 (error 'brightness "expected an integer, got: ~a" value))
   (unless (and (<= amount 100) (>= amount 0))
	 (error 'brightness "expected a value between 0 and 100, got: ~a" amount))
   (fprintf brightness-out "~a\n" 
			(ceiling (* max-brightness (/ amount 100))))
   (flush-output brightness-out)]
   [_ (error 'brightness "operation must be inc, dec, or set")])
