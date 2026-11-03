#include "Time.h"
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

namespace planning{

	Time operator+(int minute, const Time& t)
	{
		return t + minute;
	}

	Time operator-(int minute, const Time& t)
	{
		int totMinutes = t.hour * 60 + t.minute;
		totMinutes = minute - totMinutes;

		return Time(totMinutes);
	}

	istream& operator>>(istream& is, Time& t)
	{
		string saisie;
		is >> saisie;

		for(int i = 0; i < saisie.length(); i++)
		{
			if(saisie[i] == 'h' || saisie[i] == 'H')
				saisie[i] = ' ';
		}

		stringstream ss(saisie);
		int h, m;
		ss >> h >> m;

		t.hour = h;
		t.minute = m;

		return is;
	}

	ostream& operator<<(ostream& os, const Time& t)
	{
		stringstream ss;

		ss << t.hour << "h" << t.minute;

		os << ss.str();

		return os;
	}

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

	Time& Time::operator=(const Time& t)
	{
		hour = t.hour;
		minute = t.minute;

		return (*this);
	}

	Time Time::operator+(int t) const
	{
		Time resultat;

		resultat = (*this);
		
		resultat.minute += t;

		resultat.hour = resultat.hour  + resultat.minute / 60;
		resultat.minute = resultat.minute % 60;

		if(resultat.hour > 23)
			resultat.hour = resultat.hour % 24;

		return resultat;
	}

	Time Time::operator+(const Time& t)
	{
		Time resultat;

		resultat.minute = (hour * 60 + minute) + (t.hour * 60 + t.minute);

		resultat.hour = resultat.minute / 60;
		resultat.minute = resultat.minute % 60;

		if(resultat.hour > 23)
			resultat.hour = resultat.hour % 24;

		return resultat;
	}

	Time Time::operator-(int t) const
	{
		Time resultat;
		int totMinutes;

		totMinutes = hour * 60 + minute;
		totMinutes -= t;

		resultat.hour = totMinutes / 60;
		resultat.minute = totMinutes % 60;
		
		return resultat;		 
	}

	Time Time::operator-(const Time& t)
	{
		Time resultat;
		int totMinutes = (hour * 60 + minute) - (t.hour * 60 + t.minute);

		resultat.hour = totMinutes / 60;
		resultat.minute = totMinutes % 60;

		return resultat;
	}

	bool Time::operator<(const Time& t)
	{
		int totMinutes1 = hour * 60 + minute;
		int totMinutes2 = t.hour * 60 + t.minute;

		if(totMinutes1 < totMinutes2)
			return true;

		return false;
	}

	bool Time::operator>(const Time& t)
	{
		int totMinutes1 = hour * 60 + minute;
		int totMinutes2 = t.hour * 60 + t.minute;

		if(totMinutes1 > totMinutes2)
			return true;

		return false;
	}

	bool Time::operator==(const Time& t)
	{
		int totMinutes1 = hour * 60 + minute;
		int totMinutes2 = t.hour * 60 + t.minute;

		if(totMinutes1 == totMinutes2)
			return true;

		return false;
	}

	Time& Time::operator++()
	{
		int totMinutes = hour * 60 + minute;
		totMinutes += 30;

		hour = totMinutes / 60;
		minute = totMinutes % 60;

		return (*this);
	}

	Time Time::operator++(int)
	{
		Time tmp(*this);
		int totMinutes = hour * 60 + minute;
		totMinutes += 30;

		hour = totMinutes / 60;
		minute = totMinutes % 60;

		return tmp;
	}

	Time& Time::operator--()
	{
		int totMinutes = hour * 60 + minute;
		totMinutes -= 30;

		hour = totMinutes / 60;
		minute = totMinutes % 60;

		return (*this);
	}

	Time Time::operator--(int)
	{
		Time tmp(*this);
		int totMinutes = hour * 60 + minute;
		totMinutes -= 30;

		hour = totMinutes / 60;
		minute = totMinutes % 60;

		return tmp;
	}
}