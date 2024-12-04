//light1 is working perfectly
//but fan1 is just spinning the motor 
//fan and off fan individually work perfectly

#include <Servo.h>

Servo myservo;

int pos;

void setup() {
  myservo.attach(9);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);

  Serial.begin(9600);
}

void loop()
 {
  if(digitalRead(10) == HIGH)
  {
    myservo.attach(9);
    light1();
    myservo.detach();
  }

  if(digitalRead(11) == HIGH)
  {
    myservo.attach(9);
    fan();
    myservo.detach();
    delay(3000);
     myservo.attach(9);
    offfan();
    myservo.detach();
  }
 

  //light1();
  //fan();
  //(3000);
  //offfan();
  //FAN1();
  //myservo.detach();
  Serial.println("END");
  //exit(0);

}


void light1()
{
  Serial.println("START LIGHT ");
  for (pos = 180; pos >= 90; pos -= 2) 
  {
    Serial.println("ON ");
    myservo.write(pos);
    delay(10);
  }
  Serial.println("OFF LIGHT ");

  delay (3000);

  Serial.println("OFF INITIATED ");

  for (pos = 90; pos <= 180; pos += 2) 
  {
    Serial.println("OFF ");
    myservo.write(-pos);
    delay(10);
  }
}

void fan()
{
  Serial.println("START FAN");
  for (pos = 180; pos <= 270; pos += 2) 
  {
    myservo.write(-pos);
    delay(10);
    Serial.println("FAN");
  }
}

void offfan()
{
  Serial.println("START FAN");
  for (pos = 270; pos >= 160; pos -= 2) 
  {
    myservo.write(pos);
    delay(10);
    Serial.println("FAN");
  }
}

void FAN1()
{
  Serial.println("START LIGHT ");
  for (pos = 180; pos <= 270; pos += 2) 
  {
    Serial.println("ON ");
    myservo.write(-pos);
    delay(10);
  }
  Serial.println("OFF LIGHT ");

  delay (3000);

  Serial.println("OFF INITIATED ");

  for (pos = 270; pos >= 180; pos -= 2) 
  {
    Serial.println("OFF ");
    myservo.write(pos);
    delay(10);
  }
}