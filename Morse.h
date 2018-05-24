#ifndef Morse_h
#define Morse_h
#include "Arduino.h"
class Morse
{
  public:
      Morse(int pin,int pin2);
      void dot();
      void dash();
      void sound(String s);
      void play(char c);
	
  private:
      int _pin; 
     int _pin2;
};
#endif

