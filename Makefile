# -----------------------------------------------------------------------------
# THE ARCK BUILD SYSTEM
# -----------------------------------------------------------------------------

# THE COMPILER (The Blacksmith)
CXX = g++

# THE FLAGS (The Sharpness)
# -Wall -Wextra: Show all warnings (Strict mode)
# -g: Add debug info so GDB can see inside
CXXFLAGS = -Wall -Wextra -g -std=c++17

# THE TARGET (The Final Weapon)
TARGET = bin/arck

# THE SOURCE (The Raw Metal)
SRC = src/main.cpp

# -----------------------------------------------------------------------------
# THE RULES (The Instructions)
# -----------------------------------------------------------------------------

# RULE 1: DEFAULT BUILD (What happens when you type 'make')
all: $(TARGET)

# Link the object files into the final executable
$(TARGET): $(SRC)
	@mkdir -p bin
	@echo ">> COMPILING: $(SRC)..."
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)
	@echo ">> WEAPON FORGED: $(TARGET)"

# RULE 2: CLEAN (Delete old builds)
clean:
	@echo ">> CLEANING WORKSHOP..."
	rm -f $(TARGET)
	@echo ">> CLEAN COMPLETE."

# RULE 3: TEST (Build and Run immediately)
run: all
	@echo ">> EXECUTING PROTOCOL..."
	@./$(TARGET)