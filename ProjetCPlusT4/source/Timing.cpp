#include "Timing.h"
#include <iostream>
#include <cstring>
using namespace std;

int jourVersIndex(string jour);

namespace planning{

	const string Timing::MONDAY = "Lundi";
	const string Timing::TUESDAY = "Mardi";
	const string Timing::WEDNESDAY = "Mercredi";
	const string Timing::THURSDAY = "Jeudi";
	const string Timing::FRIDAY = "Vendredi";
	const string Timing::SATURDAY = "Samedi";
	const string Timing::SUNDAY = "Dimanche";

	int Timing::dayToIndex(string day)
	{
		if (day == MONDAY) 	return 0;
		if (day == TUESDAY) 	return 1;
		if (day == WEDNESDAY) 	return 2;
		if (day == THURSDAY) 	return 3;
		if (day == FRIDAY) 	return 4;
		if (day == SATURDAY) 	return 5;
		if (day == SUNDAY) 	return 6;
		return -1;
	}

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

	void Timing::setStart(const Time& a){
		start = a;
	}

	void Timing::setDuration(const Time& a){
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
		cout << endl;
		cout << "Jour : " << day << endl;
		cout << "Start : ";
		start.display();
		cout << "Duration : ";
		duration.display();
	}

	bool Timing::operator<(const Timing& t) const
	{
		int indexDay1 = dayToIndex(day);
    	int indexDay2 = dayToIndex(t.day);

    	if (indexDay1 < indexDay2) return true;
    	if (indexDay1 > indexDay2) return false;

    	if (start < t.start) return true;
    	if (start > t.start) return false;

    	if (duration < t.duration) return true;
    	if (duration > t.duration) return false;

    	return false;
	}

	bool Timing::operator>(const Timing& t) const
	{
    	return t < (*this);
	}

	bool Timing::operator==(const Timing& t) const
	{
		return (dayToIndex(day) == dayToIndex(t.day) &&
				(start == t.start) &&
				(duration == t.duration));
	}
}

