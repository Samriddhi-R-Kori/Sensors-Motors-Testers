
const int trigPin = 2;
const int echoPin = 3;
// defines variables
long duration;
int distance;

int u1t = 2;
int u1e = 3;

int u2t = 5;
int u2e = 6;

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
}
void loop()
{
  while ((getDistance(u1t, u1e) < 100))
  Serial.println("loop 1");
    ;
    
  while ((getDistance(u2t, u2e) < 100))
  Serial.println("loop 2");
    ;

}


int getDistance(int trigPin,int echoPin)
{
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);

  return distance;
}