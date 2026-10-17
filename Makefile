CC = gcc
CFLAGS = -Wall -pedantic -std=c99
TARGET = calc
SRC = main.c

all: $(TARGET)

$(TARGET): $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $(TARGET) -lm

clean:
		rm -f $(TARGET)
