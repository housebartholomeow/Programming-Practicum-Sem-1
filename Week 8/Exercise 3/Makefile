CXX = g++
CXXFLAGS = -Wall
TARGET = Exercise_3
SRC = Exercise_3.cpp
TEST_FILE = Exercise_3_test_case.txt

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test: 
	cat $(TEST_FILE)

clean:
	rm -f $(TARGET)

.PHONY: all clean test
