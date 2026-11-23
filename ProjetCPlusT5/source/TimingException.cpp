#include <iostream>
#include <string>

#include "TimingException.h"

using namespace std;

namespace planning{

	TimingException::TimingException() : Exception("Invalid day"){
		code = INVALID_DAY;

		#ifdef DEBUG
		cout << "Constructeur par défault TimingException" << endl;
		#endif
	}

	TimingException::TimingException(string message, int c) : Exception(message){
		code = c;

		#ifdef DEBUG
		cout << "Constructeur d'initialisation TimingException" << endl;
		#endif
	}

	TimingException::TimingException(const TimingException& tE2) : Exception(tE2){
		code = tE2.code;

		#ifdef DEBUG
		cout << "Constructeur de copie TimingException" << endl;
		#endif
	}

	TimingException::~TimingException(){
		#ifdef DEBUG
		cout << "destructeur de TimingException" << endl;
		#endif
	}

	int TimingException::getCode() const {
		return code;
	}
}