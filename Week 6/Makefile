CXX = g++
CXXFLAGS = -Wall
TARGET = Meeting_6
TEST_TARGET = Meeting_6_tests
SRC = Meeting_6.cpp
TEST_SRC = Meeting_6_tests.cpp

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test: $(TEST_TARGET)
	./$(TEST_TARGET)

$(TEST_TARGET): $(TEST_SRC)
	$(CXX) $(CXXFLAGS) -o $(TEST_TARGET) $(TEST_SRC)

clean:
	rm -f $(TARGET) $(TEST_TARGET)

.PHONY: all clean test
