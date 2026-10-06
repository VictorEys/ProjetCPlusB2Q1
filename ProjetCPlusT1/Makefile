.SILENT:
LIB_EVENT=./LibEvent
COMP=g++ -I $(LIB_EVENT)
OBJS=$(LIB_EVENT)/Event.o
PROGRAMS=test_event

all: $(PROGRAMS) 

test_event: main.cpp $(OBJS)
	echo Creation de test_event
	$(COMP) main.cpp $(OBJS) -o test_event

$(LIB_EVENT)/Event.o: $(LIB_EVENT)/Event.cpp $(LIB_EVENT)/Event.h
	echo Creation de Event.o
	$(COMP) $(LIB_EVENT)/Event.cpp -c -o $(LIB_EVENT)/Event.o

clean:
	rm -f $(OBJS) core

clobber: clean
	rm -f $(PROGRAMS)