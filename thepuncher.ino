#define ECHO 9
#define TRIG 8

void setup() {
Serial.begin(9600);
pinMode(TRIG,OUTPUT);
pinMode(ECHO,INPUT);
}

long duration;
long distance;

void loop() {
   digitalWrite(TRIG, LOW);
  delayMicroseconds(5);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(ECHO, HIGH);
  // Calculating the distance
  distance = (duration/2) / 29.1;
  Serial.println(distance);

  delay(250);

}
