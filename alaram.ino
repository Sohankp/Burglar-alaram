int Buzzer = 6;
int inputPin = 2;
int pirState = LOW;
int val =0;
int ledPin = 13;
void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(inputPin, INPUT);
  
}

void loop()
{
  val = digitalRead(inputPin);
  if (val==HIGH){
    digitalWrite(ledPin,HIGH);
    digitalWrite(Buzzer,1);
  if (pirState== LOW)
  {
    pirState = HIGH;
  }
  }
  else{
    digitalWrite(ledPin, LOW);
    digitalWrite(Buzzer,0);
    if(pirState==HIGH)
    {
      pirState==LOW;
    }
  }
}
