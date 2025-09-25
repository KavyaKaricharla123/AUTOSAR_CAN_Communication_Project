CC = gcc
CFLAGS = -Wall -I./src -I./config
SRCS = src/main.c src/app.c src/can_driver.c src/can_if.c
OBJS = $(SRCS:.c=.o)
TARGET = can_demo

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJS) $(TARGET)
