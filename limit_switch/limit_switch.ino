int s1=22;
int s2=23;
int y;
int z;

void setup() 
{
  pinMode(s1,INPUT);
  pinMode(s2,INPUT);
  Serial.begin(9600);
  digitalWrite(s1,1);
  digitalWrite(s2,1); 
}

void loop() 
{
//SWITCHES - accident
y=digitalRead(s1);
z=digitalRead(s2);

  if(y==0)//minor
   {
    //just to chk-leddigitalWrite(l1,HIGH);
    Serial.println("sw1 pressed");
    delay(1000);
    
     //msg family with location
   }
  else if(z==0)//major
  {
     //just to chk-led
   
    Serial.println("sw2 pressed");
     delay(1000);
    
    //msg family police & ambulance with location
  }
  else
  {
    
  }
}
