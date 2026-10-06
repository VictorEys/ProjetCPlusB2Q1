#ifndef Event_H
#define Event_H

class Event
{
private:
  int code;
  char* title;

public:
  // Const - Dest Event
  Event();
  Event(int c, const char* t);
  Event(const Event& event2);
  ~Event();


  // Set - Get Event
  void setCode(int c);
  void setTitle(const char*t);
  int getCode() const;
  const char* getTitle() const;

  // affichage Event
  void display() const;
};

#endif