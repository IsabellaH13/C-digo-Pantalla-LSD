#include <LiquidCrystal.h>
int rs=12, e=11, d4=5, d5=4, d6=3, d7=2;
LiquidCrystal time(rs,e,d4,d5,d6,d7);
unsigned long tiempo;

  void setup(){
  	
    time.begin(16,2);
    time.display();
    time.clear();
    
  }
  void loop(){
    time.setCursor(0,0);
  	time.print("Alarma Activada");
    time.noDisplay();
    delay(500); 
    time.display();
    delay(500);
  	
  }
