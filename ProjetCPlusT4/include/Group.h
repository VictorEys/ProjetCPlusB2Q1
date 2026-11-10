#ifndef GROUP_H
#define GROUP_H

#include <string>
#include "Schedulable.h"

class Group: public Schedulable{

friend std::ostream& operator<<(std::ostream& os, const Group& g);

private:
	std::string name;

public:
	//Constructeur
	Group();
	Group(int id, const std::string& t);
	Group(const Group& group2);
	virtual ~Group();

	//Set - Get
	void setName(std::string t);
	const std::string& getName() const;

	std::string toString() const override;
	std::string tuple() const override;

	//operateur
	Group& operator=(const Group& g);
};
#endif