#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <string>

class Exception{
protected:
	std::string message;

public: 
	Exception();
	Exception(const std::string& m);
	Exception(const Exception& exception2);
	~Exception();

	const std::string getMessage() const;
	
};


#endif