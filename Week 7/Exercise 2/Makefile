CXX = g++
CXXFLAGS = -Wall
TARGET = Exercise_2
SRC = Exercise_2.cpp
TEST_FILE = Exercise_2_test_cases.txt

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test: 
	cat $(TEST_FILE)

clean:
	rm -f $(TARGET)

.PHONY: all clean test
