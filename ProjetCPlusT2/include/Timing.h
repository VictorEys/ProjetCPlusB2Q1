#ifndef Timing_H
#define Timing_H

#include <string>
#include "Time.h"

namespace planning{

	class Timing
	{
	private:
		std::string 	day;
		Time 	start;
		Time	duration;

	public:
		//constantes statique
		static const std::string MONDAY;
		static const std::string TUESDAY;
		static const std::string WEDNESDAY;
		static const std::string THURSDAY;
		static const std::string FRIDAY;
		static const std::string SATURDAY;
		static const std::string SUNDAY;
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
}

#endif