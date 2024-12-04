#include <Servo.h>

Servo palm;
Servo arm;
int p = 10; //palm pin
int m = 110; //middle
int r = 50; //right
int l = 170; //left

int a = 8; //arm pin
int d = 0; //down
int up = 200; //up

int pos;

void setup()
{
  palm.attach(p);
  palm.write(m);
  arm.attach(a);
  arm.write(d);

  Serial.begin(9600);
}

void loop()
{
  for (pos = d; pos <= up; pos += 1)
  {
    arm.write(pos);
    delay(10);
  }

  palm.write(m);
  delay(250);
  palm.write(r);
  delay(250);
  palm.write(l);
  delay(250);
  palm.write(m);
  delay(250);
  palm.write(r);
  delay(250);
  palm.write(l);
  delay(250);
  palm.write(m);
  delay(250);
  palm.write(r);
  delay(250);
  palm.write(l);
  delay(250);
  palm.write(m);
  delay(250);
 delay(500);
  for (pos = up; pos >= d; pos -= 1)
  {
    arm.write(pos);
    delay(10);
  }

}
