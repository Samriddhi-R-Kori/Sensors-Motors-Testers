#include <SoftwareSerial.h>

SoftwareSerial BT(10, 11);
String state;

void setup()
{
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
}

void loop()
{
  while (BT.available())
  {
    delay(10);
    char c = BT.read();
    state += c;
  }
  if (state.length() > 0)
  {
    Serial.println(state);
  }

  if (state == "on")
  {
    digitalWrite(13, HIGH);
  }
  else if (state == "off")
  {
    digitalWrite(13, LOW);
  }

  state = "";
}
