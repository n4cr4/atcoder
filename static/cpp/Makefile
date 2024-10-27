CXX = /usr/bin/g++
CXXFLAGS = -std=gnu++17 -Wall -Wextra -O2 -DONLINE_JUDGE -I../../../ac-library
TARGET = a.out
SRC = main.cpp

all: build

build: $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test: build
	oj t

clean:
	rm -f $(TARGET)

.PHONY: all build test clean
