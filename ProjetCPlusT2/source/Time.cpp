#include "Time.h"
#include<iostream>
using namespace std;

namespace planning{

	Time::Time(){
		hour = 0;
		minute = 0;
		cout << "--- Constructeur par défaut Time ---" << endl;
	}

	Time::Time(int c, int d){
		if(c < 0)
			throw invalid_argument("Heure invalide : heure ne peut pas etre negative !");

		if(d < 0 || d >= 60)
			throw invalid_argument("Minute invalide : minute doit etre entre 0 et 59 !");

		hour = c;
		minute = d;

		cout << "--- Constructeur d'initialisation Time ---" << endl;
	}

	Time::Time(int c){
		if(c < 0)
			throw invalid_argument("Durée en minutes ne peut pas être négative !");

		hour = c / 60;
		minute = c % 60;
		cout << "--- Constructeur avec seulement minutes ---" << endl;
	}

	Time::Time(const Time& Time2){
		hour = Time2.hour;
		minute = Time2.minute;
		cout << "--- Constructeur de copie Time ---" << endl;
	}

	Time::~Time(){
		cout << "--- Destructeur de Time ---" << endl;
	}

	void Time::setHour(int c){
		if(c < 0 || c > 23) return;
		hour = c;
	}

	void Time::setMinute(int c){
		if(c < 0 || c > 59) return;
		minute = c;
	}

	int Time::getHour() const{
		return hour;
	}

	int Time::getMinute() const{
		return minute;
	}

	void Time::display() const{
		if(hour < 10) cout << "0";
		cout << hour << "h";

		if(minute < 10) cout << "0";
		cout << minute << endl;
	}
}