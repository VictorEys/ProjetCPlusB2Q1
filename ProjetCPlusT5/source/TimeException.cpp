#include <iostream>
#include <string>

#include "TimeException.h"
using namespace std;

namespace planning{

	TimeException::TimeException() : Exception("Erreur de temps"){
		code = INVALID_HOUR;

		#ifdef DEBUG
		cout << "Constructeur par défault TimeException" << endl;
		#endif
	}

	TimeException::TimeException(string message, int c) : Exception(message){
		code = c;

		#ifdef DEBUG
		cout << "Constructeur d'initialisation TimeException" << endl;
		#endif
	}

	TimeException::TimeException(const TimeException& tE2) :Exception(tE2){
		code = tE2.code;

		#ifdef DEBUG
		cout << "Constructeur de copie TimeException" << endl;
		#endif
	}

	TimeException::~TimeException(){
		#ifdef DEBUG
		cout << "destructeur de TimeException" << endl;
		#endif
	}

	int TimeException::getcode() const{
		return code;
	}
}