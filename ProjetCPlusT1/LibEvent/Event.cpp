#include "Event.h"
#include <iostream>
#include <cstring>
using namespace std;


  
Event::Event(){
	code = 0;
	title = new char[21];
	strcpy(title, "Sans titre");
	cout << "--- constructeur par defaut ---" << endl;
}

Event::Event(int c, const char* t){
	code = c;
	title = new char[strlen(t) + 1];
	strcpy(title, t);
	cout << "--- Constructeur d'initialisation ---" << endl;
}

Event::Event(const Event& event2){
	code = event2.code;
	title = new char[strlen(event2.title) + 1];
	strcpy(title, event2.title);
	cout << "--- Constucteur de copie ---" << endl;
}

Event::~Event(){
	cout << "--- Destructeur d'Event ---" << endl;
	delete[] title;
}


void Event::setCode(int c){
	if(c <= 0) return;
	code = c;
}

void Event::setTitle(const char*t){
	if(strlen(t) == 0) return;
	if(strlen(t) != strlen(title))
	{
  		delete[] title;
  		title = new char[strlen(t) + 1];
	}
	strcpy(title, t);
}

int Event::getCode() const{
	return code;
}

const char* Event::getTitle() const{
	return title;
}


void Event::display() const{
	cout << "Code : " << code << endl;
	cout << "Title : " << title << endl;
}