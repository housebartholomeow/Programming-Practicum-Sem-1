CXX = g++
CXXFLAGS = -Wall
TARGET = Problem_1
SRC = Problem_1.cpp
TEST_FILE = Problem_1_test_case.txt

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test: 
	cat $(TEST_FILE)

clean:
	rm -f $(TARGET)

.PHONY: all clean test
