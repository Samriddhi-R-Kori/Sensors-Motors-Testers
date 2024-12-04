#include <Servo.h>

Servo servo;
int servoP=10;
int up=110;
int r=50;
int l=170;

void setup() 
{
  servo.attach(servoP);
  servo.write(up);
  Serial.begin(9600);
}

void loop() 
{
    servo.write(up);
    delay(250);
    servo.write(r);
    delay(250);
    servo.write(l);
    delay(250);
}
