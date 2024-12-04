int r1,r2,r3;
int rx1=11;
//int rx2=12;
//int rx3=13;

void setup() {
  digitalWrite(rx1, HIGH);//1
  //digitalWrite(rx2, HIGH);//1
  //digitalWrite(rx3,LOW);
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
r1 = digitalRead(rx1);
//r2 = digitalRead(rx2);
//r3 =digitalRead(rx3);

if(r1==0)// && r2==1) //r3==1)
{
  //message family
  Serial.println("one one one");
}

/*else if(r1==0)// && r2==0)//r3==0)
{
  Serial.println("one one zero");
  
}
else 
{
   Serial.println("no data received");
}*/
}
