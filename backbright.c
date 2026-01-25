#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BRIGHTNESS_FILE "/sys/class/backlight/intel_backlight/brightness"
#define MAX_BRIGHTNESS_FILE "/sys/class/backlight/intel_backlight/max_brightness"

long read_value(const char *path) {
    FILE *f = fopen(path, "r");
    if (!f) {
        perror("Error opening file");
        exit(1);
    }
    long value;
    if (fscanf(f, "%ld", &value) != 1) {
        perror("Error reading value");
        fclose(f);
        exit(1);
    }
    fclose(f);
    return value;
}

void write_value(const char *path, long value) {
    FILE *f = fopen(path, "w");
    if (!f) {
        perror("Error writing brightness");
        exit(1);
    }
    fprintf(f, "%ld\n", value);
    fclose(f);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s inc | dec | set <percentage>\n", argv[0]);
        return 1;
    }

    const char *direction = argv[1];
    const long current = read_value(BRIGHTNESS_FILE);
    const long max = read_value(MAX_BRIGHTNESS_FILE);
    long new = current;

    if (strcmp(direction, "inc") == 0) {
        new = current * 3 / 2;
        if (new > max)
            new = max;
        if (new < 5) 
            new = 5;

    } else if (strcmp(direction, "dec") == 0) {
        new = current * 2 / 3;
        if (new < 5) new = 0;

    } else if (strcmp(direction, "set") == 0) {
        if (argc < 3) {
            fprintf(stderr, "Error: 'set' requires a percentage value.\n");
            return 1;
        }

        int magnitude = atoi(argv[2]);
        if (magnitude < 0 || magnitude > 100) {
            fprintf(stderr, "Error: Magnitude must be an integer between 0 and 100.\n");
            return 1;
        }

        new = max * magnitude / 100;
        if (new < 0) new = 0;

    } else {
        fprintf(stderr, "Usage: %s inc | dec | set <percentage>\n", argv[0]);
        return 1;
    }

    write_value(BRIGHTNESS_FILE, new);
    return 0;
}

