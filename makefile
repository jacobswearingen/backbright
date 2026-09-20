CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -O2

PREFIX ?= /usr/local
LOCALD ?= /etc/local.d

TARGET = backbright
SRC = backbright.c
PERMS = backbright-perms.start

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

install: $(TARGET)
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp $(TARGET) $(DESTDIR)$(PREFIX)/bin/$(TARGET)
	mkdir -p $(DESTDIR)$(LOCALD)
	cp $(PERMS) $(DESTDIR)$(LOCALD)/$(PERMS)
	chmod 755 $(DESTDIR)$(LOCALD)/$(PERMS)

uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/$(TARGET)
	rm -f $(DESTDIR)$(LOCALD)/$(PERMS)

clean:
	rm -f $(TARGET)
