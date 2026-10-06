#include "Time.h"
#include<iostream>
using namespace std;


Time::Time(){
	hour = 0;
	minute = 0;
	cout << "--- Constructeur par défaut Time ---" << endl;
}

Time::Time(int c, int d){
	hour = c;
	minute = d;
	cout << "--- Constructeur d'initialisation Time ---" << endl;
}

Time::Time(const Time& Time2){
	hour = Time2.hour;
	minute = Time2.minute;
	cout << "--- Constructeur de copie Time ---" << endl;
}

Time::~Time(){
	cout << "--- Destructeur de Time ---" << endl;
}

void Time::display() const{
	cout <<"Heure : ";

	if(hour < 10) cout << "0";
	cout << hour << "h";

	if(minute < 10) cout << "0";
	cout << minute << endl;
}
