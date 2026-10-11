#ifndef Event_H
#define Event_H

#include "Timing.h"

class Event
{
private:
  int     code;
  char*   title;
  Timing* timing;
  

public:
  static int currentCode;

  // Const - Dest Event
  Event();
  Event(int c, const char* t);
  Event(int c, const char* t, Timing a);
  Event(const Event& event2);
  ~Event();


  // Set - Get Event
  void setCode(int c);
  void setTitle(const char*t);
  void setTiming(const Timing& a);
  int getCode() const;
  const char* getTitle() const;
  Timing getTiming() const;


  // affichage Event
  void display() const;
};

#endif