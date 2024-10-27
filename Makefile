# Makefile
CXX = /usr/bin/g++
CXXFLAGS = -std=gnu++17 -Wall -Wextra -O2 -DONLINE_JUDGE -I./ac-library
TARGET = a.out

build:
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(file)
