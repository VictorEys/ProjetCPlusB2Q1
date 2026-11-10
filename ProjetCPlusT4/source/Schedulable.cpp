#include "Schedulable.h"
#include <iostream>
#include <string>

using namespace std;

Schedulable::Schedulable(){
	id = 0;

	#ifdef DEBUG
	cout << "--- constructeur par default Schedulable ---" << endl;
	#endif
}

Schedulable::Schedulable(int c){
	id = c;

	#ifdef DEBUG
	cout << "--- constructeur d'initialistion de Schedulable ---" << endl;
	#endif
}

Schedulable::~Schedulable(){
	#ifdef DEBUG
	cout << "--- Destructeur de Schedulable ---" << endl;
	#endif
}


void Schedulable::setId(const int c){
	id = c;
}

int Schedulable::getId() const{
	return id;
}


string Schedulable::tuple() const{
	return to_string(id) + ";";
}