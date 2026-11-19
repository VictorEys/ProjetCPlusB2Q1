#include "Event.h"
#include <iostream>
#include <cstring>
using namespace std;

namespace planning{

	int Event::currentCode = 1;
	  
	Event::Event(){
		code = currentCode;
		title = new char[10];
		strcpy(title, "Sans titre");
		timing = nullptr;

		cout << "--- constructeur par defaut Event---" << endl;
	}

	Event::Event(int c, const char* t){
		code = currentCode;
		title = new char[strlen(t) + 1];
		strcpy(title, t);
		timing = nullptr;
		cout << "--- Constructeur d'initialisation Event---" << endl;
	}

	Event::Event(int c, const char* t, Timing a){
		code = currentCode;
		title = new char[strlen(t) + 1];
		strcpy(title, t);
		timing = new Timing(a);
		cout << "--- Constructeur d'initialisation Event---" << endl;
	}

	Event::Event(const Event& event2){
		code = currentCode;
		title = new char[strlen(event2.title) + 1];
		strcpy(title, event2.title);
		if(event2.timing != nullptr)
			timing = new Timing(*event2.timing);
		else
			timing = nullptr;

		cout << "--- Constucteur de copie Event---" << endl;
	}

	Event::~Event(){
		cout << "--- Destructeur d'Event ---" << endl;
		delete[] title;
		delete timing;
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

	void Event::setTiming(const Timing& a){
		if(timing != nullptr) delete timing;
		
		timing = new Timing(a);
	}

	int Event::getCode() const{
		return code;
	}

	const char* Event::getTitle() const{
		return title;
	}

	Timing Event::getTiming() const{
		if(timing != nullptr) return *timing;

		cout << "--- Aucun timing défini ---" << endl;
		return Timing();
	}


	void Event::display() const{
		cout << "Code : " << code << endl;
		cout << "Title : " << title << endl;
		cout << "Timing :";
		if(timing == nullptr) 
			cout << "---Pas de timing défini---" << endl;
		else
			timing->display();
	}
}