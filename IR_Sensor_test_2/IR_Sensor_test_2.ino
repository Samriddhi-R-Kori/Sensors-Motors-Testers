int s1 = 8;
int s2 = 9;
int r1, r2;

void setup() 
{
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);

  pinMode(s1, INPUT);
  pinMode(s2, INPUT);

  Serial.begin(9600);
}

void loop()
{
  Serial.print(digitalRead(s1));
  Serial.println(digitalRead(s2));
}