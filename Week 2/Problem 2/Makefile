CXX = g++
CXXFLAGS = -Wall
TARGET = Problem_2
SRC = Problem_2.cpp
TEST_FILE = Problem_2_test_cases.txt

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test: 
	cat $(TEST_FILE)

clean:
	rm -f $(TARGET)

.PHONY: all clean test
