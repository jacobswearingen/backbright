CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -O2

TARGET = backbright
SRC = backbright.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

install: $(TARGET) 
	mkdir -p $(PREFIX)/bin 
	cp $(TARGET) $(PREFIX)/bin/$(TARGET) 

uninstall: 
	rm -f $(PREFIX)/bin/$(TARGET) 

clean:
	rm -f $(TARGET)
