CXX = g++
CXXFLAGS = -Wall
TARGET = Exercise_1_Value
SRC = Exercise_1_Value.cpp
TEST_FILE = Exercise_1_Value_test_cases.txt

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test: 
	cat $(TEST_FILE)

clean:
	rm -f $(TARGET)

.PHONY: all clean test
