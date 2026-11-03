#ifndef TIME_H
#define TIME_H

namespace planning{

	class Time
	{
	friend Time operator+(int minute, const Time& t);
	friend Time operator-(int minute, const Time& t);

	private:
		int hour;
		int minute;

	public:
		//constructeur 
		Time();
		Time(int c, int d);
		explicit Time(int c);
		Time(const Time& Time2);
		~Time();

		//set - get
		void setHour(int c);
		void setMinute(int c);
		int getHour() const;
		int getMinute() const;

		//display
		void display() const;

		//opérateur
		Time& operator=(const Time& t);
		Time operator+(int t) const;
		Time operator+(const Time& t);
		Time operator-(int t) const;
		Time operator-(const Time& t);
		bool operator<(const Time& t);
		bool operator>(const Time& t);
		bool operator==(const Time& t);
	};
}
#endif