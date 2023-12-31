CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99 # strict mode
INCLUDES = -Ilib/c-objects
BIN_DIR = bin

# List of source files
SOURCES = main.c lib/c-objects/c-objects.c

# List of object files (automatically generated from source files)
OBJECTS = $(addprefix $(BIN_DIR)/, $(SOURCES:.c=.o))

# Output executable
EXECUTABLE = $(BIN_DIR)/main

all: $(BIN_DIR) $(EXECUTABLE)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXECUTABLE)

$(BIN_DIR)/%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(BIN_DIR)
