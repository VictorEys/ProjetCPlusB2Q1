#include<iostream>
#include<string>
#include "Classroom.h"

using namespace std;

 ostream& operator<<(ostream& os, const Classroom& c){
 	os << c.toString();

 	return os;
 }

Classroom::Classroom() : Schedulable(){
	name = "---";
	seatingCapacity = 0;

	#ifdef DEBUG
	cout << "constructeur par defaut Classroom" << endl;
	#endif
}

Classroom::Classroom(int id, string t, int sC) : Schedulable(id){
	name = t;
	seatingCapacity = sC;

	#ifdef DEBUG
	cout << "constructeur d'initialisation Classroom" << endl;
	#endif
}

Classroom::Classroom(const Classroom& classroom2) : Schedulable(classroom2.id){
	name = classroom2.name;
	seatingCapacity = classroom2.seatingCapacity;

	#ifdef DEBUG
	cout << "constructeur de copie Classroom" << endl;
	#endif
}

Classroom::~Classroom(){
	#ifdef DEBUG
	cout << "destructeur de  Classroom" << endl;
	#endif
}

void Classroom::setName(string t){
	name = t;
}

void Classroom::setSeatingCapacity(int sC){
	seatingCapacity = sC;
}

const string& Classroom::getName() const{
	return name;
}

int Classroom::getSeatingCapacity() const{
	return seatingCapacity;
}

string Classroom::toString() const {
	return name + "(" + to_string(seatingCapacity) + ")";
}

string Classroom::tuple() const {
	return Schedulable::tuple() + name + "(" + to_string(seatingCapacity) + ")";
}


Classroom& Classroom::operator=(const Classroom& c){
	id = c.id;
	name = c.name;
	seatingCapacity = c.seatingCapacity;

	return (*this);
}