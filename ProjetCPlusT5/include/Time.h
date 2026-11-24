#ifndef TIME_H
#define TIME_H

#include <iostream>

#include "TimeException.h"

namespace planning{

	class Time
	{
	friend Time operator+(int minute, const Time& t);
	friend Time operator-(int minute, const Time& t);
	friend std::istream& operator>>(std::istream& is, Time& t);
	friend std::ostream& operator<<(std::ostream& os, const Time& t);

	private:
		int hour;
		int minute;

	public:
		//constructeur 
		Time();
		Time(int c, int d); //throw(TimeException);
		explicit Time(int c); //throw(TimeException);
		Time(const Time& Time2);
		~Time();

		//set - get
		void setHour(int c); //throw(TimeException);
		void setMinute(int c);
		int getHour() const;
		int getMinute() const;

		//display
		void display(std::ostream& os) const;

		//opérateur
		Time& operator=(const Time& t);
		Time operator+(int t) const;
		Time operator+(const Time& t);
		Time operator-(int t) const;
		Time operator-(const Time& t);
		bool operator<(const Time& t) const;
		bool operator>(const Time& t) const;
		bool operator==(const Time& t) const; 
		Time& operator++();		//pré-incrémentatoin
		Time operator++(int);	//post-incrémentation
		Time& operator--(); 	//pré-incrémentation
		Time operator--(int);	//post-incrémentation
	};
}
#endif