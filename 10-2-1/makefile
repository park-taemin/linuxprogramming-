
CXX = g++


CXXFLAGS = -Wall -std=c++11


TARGET = GClass

SRCS = GClass.cpp


OBJS = $(SRCS:.cpp=.o)


all: $(TARGET)


$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)


%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<


clean:
	rm -f $(OBJS) $(TARGET)


.PHONY: all clean

