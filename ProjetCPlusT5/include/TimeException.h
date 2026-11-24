#ifndef TIMEEXCEPTION_H
#define TIMEEXCEPTION_H

#include "Exception.h"

namespace planning{

	class TimeException : public Exception{
	private:
		int code;

	public:
		static const int INVALID_HOUR = 1;
		static const int INVALID_MINUTE = 2;
		static const int OVERFLOW = 3;

		TimeException();
		TimeException(std::string message, int code);
		TimeException(const TimeException& tE2);
		~TimeException();

		int getCode() const;
	};
}
#endif