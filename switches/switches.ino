int s=2;
int sw;
int c=0;
void setup() 
{
  pinMode(s,INPUT);
  //digitalWrite(s,LOW);
  Serial.begin(9600);
}

void loop() 
{
  sw=digitalRead(s);
  if(sw==0)
  {
    c++;
    Serial.println(c);
  }
}
