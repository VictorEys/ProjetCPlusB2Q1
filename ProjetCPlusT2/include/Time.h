#ifndef Time_H
#define Time_H


class Time
{
private:
	int hour;
	int minute;

public:
	//constructeur 
	Time();
	Time(int c, int d);
	Time(const Time& Time2);
	~Time();

	//display
	void display() const;

};

#endif