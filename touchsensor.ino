int TouchSensor=3;                                  //Connected to digital pin D3
int led=13;
int buzz=12;
void setup()
{
  Serial.begin(9600);                                // Communication speed
   pinMode(led,OUTPUT);
   pinMode(buzz,OUTPUT);
   pinMode(TouchSensor,INPUT);
}
void loop()
{
   if(digitalRead(TouchSensor)==HIGH)      //Read Touch Sensor Signal
    {
      digitalWrite(led,HIGH);                     // If touch is HIGH, then turn on
      digitalWrite(buzz,HIGH);
     }
else
     {
       digitalWrite(led,LOW);                     //Touch Sensor is LOW , then turn off the LED
       digitalWrite(buzz,LOW);
      }
delay(100);
}
