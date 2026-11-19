#ifndef SCHEDULABLE_H
#define SCHEDULABLE_H

#include <string>

class Schedulable{
protected:
	int 	id;

public:
	Schedulable();
	Schedulable(int c);
	virtual ~Schedulable();

	void setId(const int c);
	int getId() const;

	virtual std::string toString() const = 0;
	virtual std::string tuple() const = 0;
	
};

#endif