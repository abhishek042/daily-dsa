# Compiler settings
CXX := g++
CXXFLAGS := -std=c++17 -Wall -O2

# Directories
SRC_DIR := .
BUILD_DIR := builds
BIN_DIR := bin

# Timestamped binary name
TIMESTAMP := $(shell date +"%Y%m%d_%H%M%S")
TARGET := $(BIN_DIR)/main_$(TIMESTAMP)

# Source files
SRC := $(SRC_DIR)/main.cpp

# Default target
all: $(TARGET)

# Rule to build the binary
$(TARGET): $(SRC)
	@mkdir -p $(BIN_DIR)
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)
	@cp $(TARGET) $(BUILD_DIR)/
	@echo "✅ Build complete: $(TARGET)"

# Run the latest build
run: all
	@echo "🚀 Running latest build..."
	@./$(TARGET)

# Clean object files (if any)
clean:
	@echo "🧹 Cleaning temporary object files..."
	@find . -name '*.o' -type f -delete

# Remove all previous builds
cleanall:
	@echo "🧨 Removing all previous builds..."
	@rm -rf $(BIN_DIR) $(BUILD_DIR)
	@echo "✅ All builds cleaned."

# Show recent builds
list:
	@echo "📦 Available builds:"
	@ls -1 $(BUILD_DIR) 2>/dev/null || echo "(none)"
