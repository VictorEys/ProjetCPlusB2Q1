CXX = g++
CXXFLAGS = -Wall -std=c++11

all: test_event

test_event: main.o Event.o
	$(CXX) main.o Event.o -o test_event

main.o: main.cpp Event.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Event.o: Event.cpp Event.h
	$(CXX) $(CXXFLAGS) -c Event.cpp

clean:
	rm -f *.o test_event