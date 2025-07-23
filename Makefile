TARGET = math
SRCS := $(wildcard *.cpp)
CXX = clang++
CXXFLAGS = -std=c++17 -Wall -g

all:
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(TARGET)