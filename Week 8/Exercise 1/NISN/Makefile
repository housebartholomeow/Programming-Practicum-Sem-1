CXX = g++
CXXFLAGS = -Wall
TARGET = Exercise_1_NISN
SRC = Exercise_1_NISN.cpp
TEST_FILE = Exercise_1_NISN_test_cases.txt

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test: 
	cat $(TEST_FILE)

clean:
	rm -f $(TARGET)

.PHONY: all clean test
