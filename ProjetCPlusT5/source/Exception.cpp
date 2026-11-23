#include <iostream>
#include <string>

#include "Exception.h"
using namespace std;

Exception::Exception(){
	message = "Erreur non précisée";

	#ifdef DEBUG
	cout << "constructeur par défault Exception" << endl;
	#endif
}

Exception::Exception(const string& m){
	message = m;

	#ifdef DEBUG
	cout << "constructeur d'initialisation Exception" << endl;
	#endif
}

Exception::Exception(const Exception& exception2){
	message = exception2.message;

	#ifdef DEBUG
	cout << "constructeur de copie Exception" << endl;
	#endif
}

Exception::~Exception(){
	#ifdef DEBUG
	cout << "destructeur d'Exception" << endl;
	#endif
}

const string Exception::getMessage() const{
	return message;
}