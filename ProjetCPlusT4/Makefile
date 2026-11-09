.SILENT:
LIB_INCLUDE=./include
LIB_SRC=./source
LIB_OBJ=./objet
COMP= g++ -I $(LIB_INCLUDE)
OBJS=$(LIB_OBJ)/Event.o $(LIB_OBJ)/Time.o $(LIB_OBJ)/Timing.o $(LIB_OBJ)/Schedulable.o $(LIB_OBJ)/Professor.o
PROGRAMS=test_event

all:$(PROGRAMS)

test_event: main.cpp $(OBJS)
	$(COMP) main.cpp $(OBJS) -o test_event

$(LIB_OBJ)/Event.o: $(LIB_SRC)/Event.cpp $(LIB_INCLUDE)/Event.h
	$(COMP) $(LIB_SRC)/Event.cpp -c -o $(LIB_OBJ)/Event.o

$(LIB_OBJ)/Time.o: $(LIB_SRC)/Time.cpp $(LIB_INCLUDE)/Time.h
	$(COMP) $(LIB_SRC)/Time.cpp -c -o $(LIB_OBJ)/Time.o

$(LIB_OBJ)/Timing.o: $(LIB_SRC)/Timing.cpp $(LIB_INCLUDE)/Timing.h $(LIB_INCLUDE)/Time.h
	$(COMP) $(LIB_SRC)/Timing.cpp -c -o $(LIB_OBJ)/Timing.o

$(LIB_OBJ)/Schedulable.o: $(LIB_SRC)/Schedulable.cpp $(LIB_INCLUDE)/Schedulable.h 
	$(COMP) $(LIB_SRC)/Schedulable.cpp -c -o $(LIB_OBJ)/Schedulable.o

$(LIB_OBJ)/Professor.o: $(LIB_SRC)/Professor.cpp $(LIB_INCLUDE)/Professor.h 
	$(COMP) $(LIB_SRC)/Professor.cpp -c -o $(LIB_OBJ)/Professor.o

clean:
	rm -f $(OBJS) core

clobber: clean
	rm -f $(PROGRAMS)