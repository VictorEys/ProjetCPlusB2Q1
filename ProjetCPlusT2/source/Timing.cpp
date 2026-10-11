#include "Timing.h"
#include <iostream>
#include <cstring>
using namespace std;

namespace planning{

	const string Timing::MONDAY = "Lundi";
	const string Timing::TUESDAY = "Mardi";
	const string Timing::WEDNESDAY = "Mercredi";
	const string Timing::THURSDAY = "Jeudi";
	const string Timing::FRIDAY = "Vendredi";
	const string Timing::SATURDAY = "Samedi";
	const string Timing::SUNDAY = "Dimanche";

	Timing::Timing(){
		day = "Lundi";

		cout << "--- constructeur par default Timing ---" << endl;
	}

	Timing::Timing(string t, Time a, Time b){
		day = t;
		start = a;
		duration = b;
		cout << "--- Constructeur d'initialisation Timing ---" << endl;
	}

	Timing::Timing(const Timing& Timing2){
		day = Timing2.day;
		start = Timing2.start;
		duration = Timing2.duration;
		cout << "--- Constructeur de copie Timing ---" << endl;
	}

	Timing::~Timing(){
		cout << "--- Destructeur de Timing ---" << endl;
	}

	void Timing::setDay(string t){
		if(t == "MONDAY" || t == "TUESDAY" || t == "WEDNESDAY" || t == "THURSDAY" || t == "FRIDAY" || t == "SATURDAY" || t == "SUNDAY") {
	        day = t;
	    }
	}

	void Timing::setStart(Time a){
		start = a;
	}

	void Timing::setDuration(Time a){
		if(a.getHour() + a.getMinute() <= 0) return;
		duration = a;
	}

	const string& Timing::getDay() const{
		return day;
	}

	Time Timing::getStart() const{
		return start;
	}

	Time Timing::getDuration() const{
		return duration;
	}

	void Timing::display() const{
		cout << "Jour : " << day << endl;
		cout << "Start : ";
		start.display();
		cout << "Duration : ";
		duration.display();
	}
}