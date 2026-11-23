.SILENT:
LIB_INCLUDE=./include
LIB_SRC=./source
LIB_OBJ=./objet
DEBUG_FLAG=
COMP= g++ -I $(LIB_INCLUDE) $(DEBUG_FLAG)
OBJS=$(LIB_OBJ)/Event.o $(LIB_OBJ)/Time.o $(LIB_OBJ)/Timing.o $(LIB_OBJ)/Schedulable.o \
	 $(LIB_OBJ)/Professor.o $(LIB_OBJ)/Group.o $(LIB_OBJ)/Classroom.o $(LIB_OBJ)/Exception.o \
	 $(LIB_OBJ)/TimeException.o $(LIB_OBJ)/TimingException.o
PROGRAMS=test_event

all:$(PROGRAMS)

test_event: main.cpp $(OBJS)
	$(COMP) main.cpp $(OBJS) -o test_5

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

$(LIB_OBJ)/Group.o: $(LIB_SRC)/Group.cpp $(LIB_INCLUDE)/Group.h 
	$(COMP) $(LIB_SRC)/Group.cpp -c -o $(LIB_OBJ)/Group.o

$(LIB_OBJ)/Classroom.o: $(LIB_SRC)/Classroom.cpp $(LIB_INCLUDE)/Classroom.h 
	$(COMP) $(LIB_SRC)/Classroom.cpp -c -o $(LIB_OBJ)/Classroom.o

$(LIB_OBJ)/Exception.o: $(LIB_SRC)/Exception.cpp $(LIB_INCLUDE)/Exception.h
	$(COMP) $(LIB_SRC)/Exception.cpp -c -o $(LIB_OBJ)/Exception.o

$(LIB_OBJ)/TimeException.o: $(LIB_SRC)/TimeException.cpp $(LIB_INCLUDE)/TimeException.h
	$(COMP) $(LIB_SRC)/TimeException.cpp -c -o $(LIB_OBJ)/TimeException.o

$(LIB_OBJ)/TimingException.o: $(LIB_SRC)/TimingException.cpp $(LIB_INCLUDE)/TimingException.h
	$(COMP) $(LIB_SRC)/TimingException.cpp -c -o $(LIB_OBJ)/TimingException.o

clean:
	rm -f $(OBJS) core

clobber: clean
	rm -f $(PROGRAMS)