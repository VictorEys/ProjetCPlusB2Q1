#include "Professor.h"
#include <iostream>
#include <string>

using namespace std;

Professor::Professor() : Schedulable(){
	lastName = "---";
	firstName = "---";

	cout << "--- constructeur par default Professor ---" << endl;
}

Professor::Professor (int id, const string& lN, const string& fN) : Schedulable(id){
	lastName = lN;
	firstName = fN;

	cout << "--- constructeur d'initialistion de Professor ---" << endl;
}

Professor::Professor(const Professor& Professor2) : Schedulable(Professor2.id){
	lastName = Professor2.lastName;
	firstName = Professor2.firstName;

	cout << "--- constructeur de copie de Professor ---" << endl;
}

Professor::~Professor(){
	cout << "--- Destructeur de Professor ---" << endl;
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


string Professor::toString(){
	return lastName + " " + firstName;
}

string Professor::tuple(){
	return Schedulable::tuple() + lastName + ";" + firstName;
}

