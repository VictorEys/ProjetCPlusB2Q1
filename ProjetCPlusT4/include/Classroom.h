#ifndef CLASSROOM_H
#define CLASSROOM_H

#include <string>
#include "Schedulable.h"

class Classroom: public Schedulable{

friend std::ostream& operator<<(std::ostream& os, const Classroom& c);

private:
	std::string name;
	int seatingCapacity;

public:
	//Constructeur
	Classroom();
	Classroom(int id, std::string n, int sC);
	Classroom(const Classroom& classroom2);
	virtual ~Classroom();

	//set - get
	void setName(std::string t);
	void setSeatingCapacity(int sC);
	const std::string& getName() const;
	int getSeatingCapacity() const;

	std::string toString() const override;
	std::string tuple() const override;

	//operateur
	Classroom& operator=(const Classroom& c);
};


#endif