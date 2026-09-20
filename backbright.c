#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BRIGHTNESS_FILE "/sys/class/backlight/intel_backlight/brightness"
#define MAX_BRIGHTNESS_FILE "/sys/class/backlight/intel_backlight/max_brightness"

static void usage(const char *prog) {
    fprintf(stderr, "Usage: %s inc | dec | set <percentage>\n", prog);
    exit(1);
}

static long read_value(const char *path) {
    FILE *f = fopen(path, "r");
    long value;
    if (!f || fscanf(f, "%ld", &value) != 1) {
        fprintf(stderr, "backbright: cannot read %s\n", path);
        exit(1);
    }
    fclose(f);
    return value;
}

static void write_value(const char *path, long value) {
    FILE *f = fopen(path, "w");
    if (!f) {
        perror("Error writing brightness");
        exit(1);
    }
    fprintf(f, "%ld", value);
    fclose(f);
}

int main(int argc, char *argv[]) {
    if (argc < 2)
        usage(argv[0]);

    
    const char *direction = argv[1];
    const long current = read_value(BRIGHTNESS_FILE);
    const long max = read_value(MAX_BRIGHTNESS_FILE);
    const long floor = max / 100; /* 1% of range, scales with hardware */
    long new;

    if (strcmp(direction, "inc") == 0) {
        new = current * 2;
        if (new > max)
            new = max;
        if (new < floor)
            new = floor;

    } else if (strcmp(direction, "dec") == 0) {
        new = current / 2;
        if (new < floor)
            new = (current > floor) ? floor : 0;

    } else if (strcmp(direction, "set") == 0) {
        if (argc < 3) {
            fprintf(stderr, "Error: 'set' requires a percentage value.\n");
            return 1;
        }

        char *end;
        long magnitude = strtol(argv[2], &end, 10);
        if (*end != '\0' || magnitude < 0 || magnitude > 100) {
            fprintf(stderr, "Error: Magnitude must be an integer between 0 and 100.\n");
            return 1;
        }

        new = max * magnitude / 100;

    } else {
        usage(argv[0]);
    }

    write_value(BRIGHTNESS_FILE, new);
    return 0;
}

