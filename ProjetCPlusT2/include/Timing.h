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

	~Timing();

	//display
	void display() const;

	
};
	

#endif