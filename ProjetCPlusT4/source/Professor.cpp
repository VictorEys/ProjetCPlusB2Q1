#include "Professor.h"
#include <iostream>
#include <string>

using namespace std;

ostream& operator<<(ostream& os, const Professor& p){
	os << p.toString();

	return os;
}

Professor::Professor() : Schedulable(){
	lastName = "---";
	firstName = "---";

	#ifdef DEBUG
	cout << "--- constructeur par default Professor ---" << endl;
	#endif
}

Professor::Professor (int id, const string& lN, const string& fN) : Schedulable(id){
	lastName = lN;
	firstName = fN;

	#ifdef DEBUG
	cout << "--- constructeur d'initialistion de Professor ---" << endl;
	#endif
}

Professor::Professor(const Professor& Professor2) : Schedulable(Professor2.id){
	lastName = Professor2.lastName;
	firstName = Professor2.firstName;

	#ifdef DEBUG
	cout << "--- constructeur de copie de Professor ---" << endl;
	#endif
}

Professor::~Professor(){

	#ifdef DEBUG
	cout << "--- Destructeur de Professor ---" << endl;
	#endif
}

void Professor::setLastName(string t){
	lastName = t;
}

void Professor::setFirstName(string t){
	firstName = t;
}

const string& Professor::getLastName() const{
	return lastName;
}

const string& Professor::getFirstName() const{
	return firstName;
}


string Professor::toString() const{
	return lastName + " " + firstName;
}

string Professor::tuple() const{
	return Schedulable::tuple() + lastName + ";" + firstName;
}

Professor& Professor::operator=(const Professor& p){
	id = p.id;
	lastName = p.lastName;
	firstName = p.firstName;

	return (*this);
}