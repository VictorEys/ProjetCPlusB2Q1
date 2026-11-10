#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <string>
#include "Schedulable.h"

class Professor : public Schedulable{

friend std::ostream& operator<<(std::ostream& os, const Professor& p);

private:
	std::string	lastName;
	std::string firstName;

public:
	Professor();
	Professor(int id, const std::string& lN, const std::string& fN);
	Professor(const Professor& Professor2);
	virtual ~Professor();

	void setLastName(std::string t);
	void setFirstName(std::string t);
	const std::string& getLastName() const;
	const std::string& getFirstName() const;

	std::string toString() const override;
	std::string tuple() const override;

	Professor& operator=(const Professor& p);
};

#endif