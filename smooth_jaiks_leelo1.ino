// C++ code
//
int red=9;
int yellow=10;
int green=11;
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  digitalWrite(red,HIGH);
  delay(1000);
  digitalWrite(yellow,HIGH);
  delay(1000);
  digitalWrite(yellow,LOW);
  delay(1000);
  digitalWrite(yellow,HIGH);
  delay(1000);
  digitalWrite(yellow,LOW);
  delay(1000);
  digitalWrite(yellow,HIGH);
  delay(1000);
  digitalWrite(yellow,LOW);
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(green,LOW);
  
 
}