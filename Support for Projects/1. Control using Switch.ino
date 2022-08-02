int PinNo = 2;
int SwitchState = 0;

void setup() 
{
  pinMode(13, OUTPUT);
  pinMode(PinNo, INPUT);
}

void loop() 
{
  SwitchState = digitalRead(PinNo);

  if(SwitchState == HIGH)
  {
    digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13, LOW);
  }
}
