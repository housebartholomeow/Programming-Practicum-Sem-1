CXX = g++
CXXFLAGS = -Wall
TARGET = Meeting_6
SRC = Meeting_6.cpp
TEST_FILE = meeting_6_test_cases.txt

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test: 
	cat $(TEST_FILE)

clean:
	rm -f $(TARGET)

.PHONY: all clean test
