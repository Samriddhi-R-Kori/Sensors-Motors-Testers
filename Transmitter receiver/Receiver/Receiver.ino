int r1, r2, r3;
int rx1 = 10;
//int rx2 = 10;
//int rx3 = 13;
void setup()
{
  pinMode(rx1, INPUT);
  digitalWrite(rx1, LOW);//0
  //pinMode(rx2, INPUT);
  //digitalWrite(rx2, LOW);//1
  //pinMode(rx3, INPUT);
  //digitalWrite(rx3, LOW);//1
  Serial.begin(9600);
}

void loop()
{
  r1 = digitalRead(rx1);
  //r2 = digitalRead(rx2);
  //r3 = digitalRead(rx3);
  Serial.println(r1);
  //Serial.print(r2);
  //Serial.println(r3);
  //delay(500);

  /*if (r1 == 0 && r2 == 1 && r3 == 0) //minor
  {
    Serial.println("abcd");
    //message family
    Serial.print(r1);
    Serial.print(r2);
    Serial.println(r3);
    delay(500);
  }*/

}
