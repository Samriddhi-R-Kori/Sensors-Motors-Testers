char Incoming_value = 0;

float c;

int u1t = 2;
int u1e = 3;

int u2t = 5;
int u2e = 6;

long duration;
int distance;
int trigPin;
int echoPin;


// (getDistance(u1t, u1e) < 100)
// (getDistance(u2t, u2e) < 100)
// (getDistance(u1t, u1e) < 100)
// (getDistance(u2t, u2e) < 100)

void setup() 
{
  pinMode(13, OUTPUT);

  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);

  Serial.begin(9600);
  c = 0;
}

void loop() 
{
  //ble();

  while ((getDistance(u1t, u1e) < 100));
//ble();
    ;
  while ((getDistance(5, 6) < 100));
  //ble();
    ;
  //enter();
}

/*
void enter() 
{
  digitalWrite(13, true);
  c += 1;
  Serial.print("enter ");
  Serial.println(c);
  delay(1000);

  if (c==1)
  {
    light1();
    light2();
    fan();
  }

  while ((getDistance(u2t, u2e) < 100)) 
  {
    ble();
    if ((getDistance(u1t, u1e) < 100)) 
    {
      while ((getDistance(u2t, u2e) < 100))
      ble();
        ;
      enter();
      c += 1;
      Serial.print("enter ");
      Serial.println(c);
    }
  }
  while ((getDistance(u1t, u1e) < 100))
  ble();
    ;
  exit();
}

void exit() 
{
  c -= 1;
  Serial.print("exit ");
  Serial.println(c);
  delay(1000);

  if(c==0)
  {
    light1f();
    light2f();
    fanf();
    digitalWrite(13,LOW);
  }

  while ((getDistance(u1t, u1e) < 100)) 
  {
    ble();
    if ((getDistance(u2t, u2e) < 100)) 
    {
      while ((getDistance(u1t, u1e) < 100))
      ble();
        ;
      exit();
      c -= 1;
      Serial.print("exit ");
      Serial.println(c);
    }
  }
  while ((getDistance(u2t, u2e) < 100))
  ble();
    ;
  enter();
}

void ble()
{
  if (Serial.available() > 0) 
  {
    Incoming_value = Serial.read();
    Serial.print(Incoming_value);
    Serial.print("\n");

    if (Incoming_value == 'a')
      light1();
    if (Incoming_value == 'b')
      light1f();

    if (Incoming_value == 'e')
      light2();
    if (Incoming_value == 'f')
      light2f();

    if (Incoming_value == 'i')
      ledlight();
    if (Incoming_value == 'j')
      ledlightf();

    if (Incoming_value == 'm')
      fan();
    if (Incoming_value == 'n')
      fanf();
  }
}

//ON ON ON ON ON ON ON ON ON ON ON ON ON ON ON ON ON ON ON ON

void light1()
{
  Serial.println("light 1 is on");
}

void light2()
{
  Serial.println("light 2 is on");
}

void ledlight()
{
  Serial.println("LED light is on");
}

void fan()
{
  Serial.println("fan is on");
}

// OFF OFF OFF OFF OFF OFF OFF OFF OFF OFF OFF OFF OFF OFF OFF OFF 

void light1f()
{
  Serial.println("light 1 is off");
}

void light2f()
{
  Serial.println("light 2 is off");
}

void ledlightf()
{
  Serial.println("LED light is off");
}

void fanf()
{
  Serial.println("fan is off");
} 

*/

float getDistance(int trig,int echo)
{
		pinMode(trig,OUTPUT);
		digitalWrite(trig,LOW);
		delayMicroseconds(2);
		digitalWrite(trig,HIGH);
		delayMicroseconds(10);
		digitalWrite(trig,LOW);
		pinMode(echo, INPUT);
    
    Serial.print(trig);
    Serial.print(echo);
    Serial.print(" Distance: ");
    Serial.println((pulseIn(echo, HIGH)/58.0));

		return pulseIn(echo, HIGH)/58.0;

}