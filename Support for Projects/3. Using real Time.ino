// Use current time and set some functions

int LedState = LOW;
unsigned long PreviousMillis = 0;
const long Interval = 1000;

void setup() 
{
  pinMode(13, OUTPUT);
}

void loop() 
{
  unsigned long CurrentMillis = millis();

  if(CurrentMillis - PreviousMillis >= Interval)
  {
      PreviousMillis = CurrentMillis;

      if(LedState == LOW)
      {
          LedState = HIGH;
      }
      else
      {
          LedState = LOW;
      }      
      digitalWrite(13, LedState);
   }
}
