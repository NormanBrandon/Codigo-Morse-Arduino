#include "Arduino.h"
#include "Morse.h"
#include <string.h>
Morse::Morse(int pin,int pin2){
  pinMode(pin,OUTPUT);
 pinMode(pin2,OUTPUT);
  _pin = pin;
  _pin2 = pin2;
}
void Morse::dot(){
  digitalWrite(_pin,HIGH);
   delay(250);
  digitalWrite(_pin,LOW);
   delay(250);

}
void Morse::sound(String s){
int longitud=s.length();
for(int i=0;i<longitud;i++){
  digitalWrite(_pin2,HIGH);//indica cuando va a entrar una nueva letra
  delay(500);
 digitalWrite(_pin2,LOW);
  play(s[i]);

}

}
void Morse::dash(){
  digitalWrite(_pin,HIGH);
   delay(1000);
  digitalWrite(_pin,LOW);
   delay(1000);
}

void Morse::play(char c){
switch(c){

  case 'a':
  dot();
  dash();

  break;
  case 'b':
  dash();
  dot();
  dot();
  dot();

  break;
  case 'c':
    dash();
    dot();
    dash();
    dot();
  break;
  case 'd':
    dash();
    dot();
    dot();
  break;
  case 'e':
    dot();
  break;
  case 'f':
    dot();
    dot();
    dash();
    dot();
  break;
  case 'g':
    dash();
    dash();
    dot(); 
  break;
  case 'h':
    dot();
    dot();
    dot();
    dot();
  break;
  case 'i':
    dot();
    dot();
  break;
  case 'j':
    dot();
    dash();
    dash();
    dash();

  break;
  case 'k':
    dash();
    dot();
    dash();
  
  break;
  case 'l':
    dot();
    dash();
    dot();
    dot();
  
  break;
  case 'm':
    dash();
    dash();
  
  break;
  case 'n':
    dash();
    dot();
  
  break;
  case 'o':
    dash();
    dash();
    dash();
  
  break;
  case 'p':
    dot();
    dash();
    dash();
    dot();
  
  break;
  case 'q':
    dash();
    dash();
    dot();
    dash();
  
  break;
  case 'r':
    dot();
    dash();
    dot();
  
  break;
  case 's':
    dot();
    dot();
    dot();
  
  break;
  case 't':
    dash();
  
  break;
  case 'u':
    dot();
    dot();
    dash();
  break;
  case 'v':
    dot();
    dot();
    dot();
    dash();
  
  break;
  case 'w':
    dot();
    dash();
    dash();
  
  break;
  case 'x':
    dash();
    dot();
    dot();
    dash();
  
  break;
  case 'y':
    dash();
    dot();
    dash();
    dash();
  
  break;
  case 'z':
    dash();
    dash();
    dot();
    dot();
  
  break;


}}
