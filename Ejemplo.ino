#include <Morse.h>
Morse m = Morse(10,13);//recibe el pin del buzzer y un pin adicional para ver cuando se cambia a una nueva letraa
char inchar;
String s="";
void setup(){
Serial.begin(9600);
}
void loop(){
  s="";
while(Serial.available()){
inchar = Serial.read();
s += inchar;
}
m.sound(s);
Serial.println(s);
delay(1000);
}


