#include "Schedulable.h"
#include <iostream>
#include <string>

using namespace std;

Schedulable::Schedulable(){
	id = 0;

	cout << "--- constructeur par default Schedulable ---" << endl;
}

Schedulable::Schedulable(int c){
	id = c;

	cout << "--- constructeur d'initialistion de Schedulable ---" << endl;
}

Schedulable::~Schedulable(){
	cout << "--- Destructeur de Professor ---" << endl;
}


void Schedulable::setId(const int c){
	id = c;
}

int Schedulable::getId() const{
	return id;
}


string Schedulable::tuple(){
	return id + ";";
}