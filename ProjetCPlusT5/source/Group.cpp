#include "Group.h"
#include <iostream>
#include <string>

using namespace std;

ostream& operator<<(std::ostream& os, const Group& g){
	os << g.toString();

	return os;
}

Group::Group() : Schedulable(){
	name = "---";

	#ifdef DEBUG
	cout << "---constructeur par défaut Group---" << endl;
	#endif
}

Group::Group(int id, const string& t) : Schedulable(id){
	name = t;

	#ifdef DEBUG
	cout << "---constructeur d'initialisation Group---" << endl;
	#endif
}

Group::Group(const Group& group2) : Schedulable(group2.id){
	name = group2.name;

	#ifdef DEBUG
	cout << "---constructeur de copie Group---" << endl;
	#endif
}

Group::~Group(){
	#ifdef DEBUG
	cout << "---destructeur de Group---" << endl;
	#endif
}

void Group::setName(const string t){
	name = t;
}

const string& Group::getName() const{
	return name;
}

string Group::toString() const{
	return name;
}

string Group::tuple() const{
	return Schedulable::tuple() + name;
}

Group& Group::operator=(const Group& g){
	id = g.id;
	name = g.name;

	return (*this);
}