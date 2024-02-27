#include <LiquidCrystal.h>
int rs=12, e=11, d4=5, d5=4, d6=3, d7=2;
LiquidCrystal time(rs,e,d4,d5,d6,d7);
unsigned long tiempo;
int variable=0;
float temperatura, valor=0;


  void setup(){
  	
    time.begin(16,2);
    time.display();
    time.clear();
    pinMode(10,OUTPUT);
    pinMode(9,OUTPUT);

  }

  void loop(){
    time.setCursor(0,0);
    time.print("Monitor de Temperatura");
    time.scrollDisplayRight();
    delay(2000);
    for(int i=0; i<5;i++){
      temperatura = analogRead(variable);
      temperatura = (temperatura * 5/ 1024) / 0.1;
      valor=valor+temperatura;
      
    }
    temperatura=valor/5;
    //time.clear();
    time.home();
    time.setCursor(0,1);
    time.print(temperatura);
    time.print(" grados C");
    if(temperatura < 21){
      digitalWrite(10,HIGH);
      digitalWrite(9,LOW);
    }
    //digitalWrite(10,LOW);
    if (temperatura >= 21){
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
    }
    //digitalWrite(9,LOW);
    delay(1000);
    valor=0;
    
  }