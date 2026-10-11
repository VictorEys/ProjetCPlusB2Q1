#ifndef Timing_H
#define Timing_H

#include <string>
#include "Time.h"


class Timing
{
private:
	std::string 	day;
	Time 	start;
	Time	duration;

public:
	//constructeur - destructeur
	Timing();
	Timing(std::string t, Time a, Time b);
	Timing(const Timing& Timing2);
	~Timing();

	//set - get
	void setDay(std::string t);
	void setStart(Time a);
	void setDuration(Time a);

	const std::string& getDay() const;
	Time getStart() const;
	Time getDuration() const;

	//display
	void display() const;

	
};
	

#endif