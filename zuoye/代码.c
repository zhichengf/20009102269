// C++ code
//
#include <MsTimer2.h> 
int tick1 = 0;
int tick2 = 0;
int i = 1 ;
void onTimer()
{
  Serial.print("timer ");
  tick1++;
  if(tick1 > 9)
  {
    tick1 = 0;
  }

  if(tick1 < 9)
  {
     digitalWrite(12,HIGH); 
     digitalWrite(13,LOW); 
  }
  if(tick1 == 0)
  {
     tick2 = i;
     i++;
     digitalWrite(13,HIGH); 
     digitalWrite(12,LOW); 
  } 
  if(tick2 >9)
  {
    tick2 = 0;
    i = 1;
  }
  if(digitalRead(3) == HIGH)
  {
    i = 1;
    tick1 = 0;
    tick2 = 0;
    digitalWrite(13,HIGH); 
    digitalWrite(12,LOW);
  }
  Serial.println(tick1);
  digitalWrite(4,(tick1&0x1));
  digitalWrite(5,((tick1>>1)&0x1));
  digitalWrite(6,((tick1>>2)&0x1));
  digitalWrite(7,((tick1>>3)&0x1));
  Serial.println(tick2);
  digitalWrite(8,(tick2&0x1));
  digitalWrite(9,((tick2>>1)&0x1));
  digitalWrite(10,((tick2>>2)&0x1));
  digitalWrite(11,((tick2>>3)&0x1));
}
void setup()
{
  Serial.begin(9600);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  
  MsTimer2::set(1000,onTimer);
  MsTimer2::start();
}

void loop()
{

}
