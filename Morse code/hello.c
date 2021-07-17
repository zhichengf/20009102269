// C++ code
//
int SHORT = 100;
int LONG = 500;
int PIN = 13;

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{

  dot();
  pause();
  dot();
  pause();
  dot();
  pause();
  dot();
  pause();
  dot();
  pause();
  
  dot();
  pause();
  
  dot();
  pause();
  line();
  pause();
  dot();
  pause();
  dot();
  pause();
  
  dot();
  pause();
  line();
  pause();
  dot();
  pause();
  dot();
  pause();
  
  line();
  pause();
  line();
  pause();
  line();
  pause();
}
void dot()
{
  digitalWrite(PIN,HIGH);
  delay(SHORT);
  digitalWrite(PIN,LOW);
  delay(SHORT);
}
void line()
{
  digitalWrite(PIN,HIGH);
  delay(LONG);
  digitalWrite(PIN,LOW);
  delay(SHORT);
}
void pause()
{
  delay(LONG);
}
