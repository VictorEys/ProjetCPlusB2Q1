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
	Time(int c);
	Time(const Time& Time2);
	~Time();

	//set - get
	void setHour(int c);
	void setMinute(int c);
	int getHour() const;
	int getMinute() const;

	//display
	void display() const;

};

#endif