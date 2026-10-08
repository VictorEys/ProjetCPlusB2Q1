#ifndef Timing_H
#define Timing_H

#include <string>
#include "Time.h"

class Timing
{
private:
	string 	day;
	Time 	start;
	Time	duration;

public:
	//constructeur
	Timing();

	~Timing();
};
	

#endif