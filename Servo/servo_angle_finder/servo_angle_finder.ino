#include <Servo.h>

Servo servo;
int servoP=10;
int angle=0;
//long s;

void setup() 
{
  servo.attach(servoP);
  Serial.begin(9600);

 // digitalWrite(13,HIGH);
}

void loop() 
{
  while(Serial.available()==0)
  {
    angle=Serial.parseInt();
    servo.write(angle);
    //delay(1000);
    //Serial.println(angle);  
    delay(500);
    servo.write(0);
  }
}
