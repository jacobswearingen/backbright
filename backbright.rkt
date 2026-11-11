#lang racket

(define BRIGHTNESS_FILE "/sys/class/backlight/intel_backlight/brightness")
(define MAX_BRIGHTNESS_FILE "/sys/class/backlight/intel_backlight/max_brightness")
;(define BRIGHTNESS_FILE "brightness")
;(define MAX_BRIGHTNESS_FILE "max_brightness")

(define max-brightness
  (call-with-input-file MAX_BRIGHTNESS_FILE read))

(define min-brightness (quotient max-brightness 100))

(define current-brightness
  (call-with-input-file BRIGHTNESS_FILE read))

(define args (vector->list (current-command-line-arguments)))

(define (write-brightness val)
  (call-with-output-file BRIGHTNESS_FILE
    #:exists 'replace
    (lambda (out)
      (fprintf out "~a\n" val))))

(match args
  [(list "inc")
   (define new-val
     (min max-brightness
          (max min-brightness (* current-brightness 2))))
   (write-brightness new-val)]
  [(list "dec")
   (define new-val
     (if (<= current-brightness min-brightness)
         0
         (max min-brightness
              (quotient current-brightness 2))))
   (write-brightness new-val)]
  [(list "set" value)
   (define amount (string->number value))
   (unless (exact-integer? amount)
     (error 'brightness "expected an integer, got: ~a" value))
   (unless (and (<= amount 100) (>= amount 0))
     (error 'brightness "expected a value between 0 and 100, got: ~a" amount))
   (define new-val
     (ceiling (* max-brightness (/ amount 100))))
   (write-brightness new-val)]
  [_ (error 'brightness "operation must be inc, dec, or set")])
