CC = gcc
CFLAGS = -Wall -Wextra -IHeaders
SOURCES_DIR = sources
OBJECTS_DIR = objects
OUTPUT_DIR = output

# List all source files and corresponding object files
SOURCES = $(wildcard $(SOURCES_DIR)/*.c) main.c
OBJECTS = $(patsubst $(SOURCES_DIR)/%.c, $(OBJECTS_DIR)/%.o, $(SOURCES))

# Define the target executable
TARGET = Student_Info_Co-curricular_Activities.exe

all: $(TARGET)

$(TARGET): $(OBJECTS) | $(OUTPUT_DIR)
	$(CC) $(CFLAGS) -o $(OUTPUT_DIR)/$@ $^

$(OBJECTS_DIR)/%.o: $(SOURCES_DIR)/%.c | $(OBJECTS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJECTS_DIR):
	mkdir $(OBJECTS_DIR)

$(OUTPUT_DIR):
	mkdir $(OUTPUT_DIR)

.PHONY: clean
clean:
	del /Q /F $(OBJECTS_DIR)\*.o $(OUTPUT_DIR)\$(TARGET) objects output
	rm -rf objects output


.PHONY: run
run: $(TARGET)
	$(OUTPUT_DIR)\$(TARGET)
