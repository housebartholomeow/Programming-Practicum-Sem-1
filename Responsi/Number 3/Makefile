CXX = g++
CXXFLAGS = -Wall
TARGET = Responsi_number_3
SRC = Responsi_number_3.cpp
TEST_FILE = Responsi_number_3_test_cases.txt

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test: 
	cat $(TEST_FILE)

clean:
	rm -f $(TARGET)

.PHONY: all clean test
