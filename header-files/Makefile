# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Executable name
TARGET = program2

# Source files and object files
SRCS = main.c print-service.c
OBJS = $(SRCS:.c=.o)

# Default target
all: $(TARGET)

# Rule to link the object files and create the executable
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Rule to compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up generated files
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets to avoid conflicts with filenames
.PHONY: all clean