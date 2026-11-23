#ifndef TIMINGEXCEPTION_H
#define TIMINGEXCEPTION_H

#include "Exception.h"

namespace planning{

	class TimingException : public Exception{
	private:
		int code;

	public:
		static const int INVALID_DAY = 1;
		static const int NO_TIMING = 2;

		TimingException();
		TimingException(std::string message, int c);
		TimingException(const TimingException& tE2);
		~TimingException();

		int getCode() const;
	};
}

#endif