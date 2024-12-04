void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char x=Serial.read();

  if(x=='a')
  {
   Serial.println("a");
   
  }

   else if(x=='b')
  {
   Serial.println("b");
  }

  

}
