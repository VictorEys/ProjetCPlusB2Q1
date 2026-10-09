#include "Timing.h"
#include <iostream>
#include <cstring>
using namespace std;

Timing::Timing(){
	day = "Lundi";

	cout << "--- constructeur par default Timing ---" << endl;
}

Timing::~Timing(){
	cout << "--- Destructeur de Timing ---" << endl;
}

void Timing::display() const{
	cout << "jour : " << day << endl;
	start.display();
	duration.display();
}

