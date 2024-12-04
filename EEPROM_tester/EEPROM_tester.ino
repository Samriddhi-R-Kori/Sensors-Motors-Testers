/*
 * Rui Santos 
 * Complete Project Details http://randomnerdtutorials.com
 */

#include <EEPROM.h>

char b;
int c;

void setup() 
{
  Serial.begin(9600);

  status();

  digitalWrite(13,c);
}

void loop()
{
  if (Serial.available() > 0) 
  {
    b = Serial.read();

    if(b=='0')
    {
      EEPROM.update(0, HIGH);
    }
    else if(b=='1')
    {
      EEPROM.update(0, LOW);
    }

    c = EEPROM.read(0);

    digitalWrite(13,c);
  }
}

void status()
{
  c = EEPROM.read(0);
}