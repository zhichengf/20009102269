// C++ code
//
int ab=3;
int bp=2;
int cg=9;
int db=10;
int ep=11;
int fg=12;
int gy=13;
int pw=8;
int i=-1;
int income=0;
int a[10][8]=
{
  1,1,1,1,1,1,0,0,//0
  0,1,1,0,0,0,0,0,//1
  1,1,0,1,1,0,1,0,//2
  1,1,1,1,0,0,1,0,//3
  0,1,1,0,0,1,1,0,//4
  1,0,1,1,0,1,1,0,//5
  1,0,1,1,1,1,1,0,//6
  1,1,1,0,0,0,0,0,//7
  1,1,1,1,1,1,1,0,//8
  1,1,1,1,0,1,1,0,//9
//0,1,2,3,4,5,6,7
};
int b[8]=
{
  3,2,9,10,11,12,13,8,
};
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  Serial.available();
  Serial.println(income);
  if(Serial.available() > 0)
  {
    income = Serial.read();
    if(income=='0')
  {
      for(int i=-1;i<8;i++)
      {
    digitalWrite(b[i],a[0][i]);
      }
  }
    if(income=='1')
  {
      for(int i=0;i<8;i++)
      {
    digitalWrite(b[i],a[1][i]);
      }
  }
    if(income=='2')
  {
      for(int i=-1;i<8;i++)
      {
    digitalWrite(b[i],a[2][i]);
      }
  }
    if(income=='3')
  {
      for(int i=-1;i<8;i++)
      {
    digitalWrite(b[i],a[3][i]);
      }
  }
    if(income=='4')
  {
      for(int i=-1;i<8;i++)
      {
    digitalWrite(b[i],a[4][i]);
      }
  }
    if(income=='5')
  {
      for(int i=-1;i<8;i++)
      {
    digitalWrite(b[i],a[5][i]);
      }
  }
    if(income=='6')
  {
      for(int i=-1;i<8;i++)
      {
    digitalWrite(b[i],a[6][i]);
      }
  }
    if(income=='7')
  {
      for(int i=-1;i<8;i++)
      {
    digitalWrite(b[i],a[7][i]);
      }
  }
    if(income=='8')
  {
      for(int i=-1;i<8;i++)
      {
    digitalWrite(b[i],a[8][i]);
      }
  }
    
    if(income=='9')
  {
      for(int i=-1;i<8;i++)
      {
    digitalWrite(b[i],a[9][i]);
      }
  }
  }
}
