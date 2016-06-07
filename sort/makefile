OBJS = main.cpp
TARGET = main.o
CXX = g++
CXXFLAGS = -Wall -pedantic -O -g
$(TARGET) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@
clean:
	rm -rf $(TARGET)
restart:
	rm -rf $(TARGET)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)