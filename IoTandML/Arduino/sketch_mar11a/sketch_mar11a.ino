int trig = 7;
int echo = 6;
int buzzer = 8; // Define the buzzer pin

long timeInMicro;
long distanceInCm;

void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT); // Use the trig variable
  pinMode(echo, INPUT); // Use the echo variable
  pinMode(buzzer, OUTPUT); // Set the buzzer pin as output
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  timeInMicro = pulseIn(echo, HIGH);

  distanceInCm = ((timeInMicro / 29) / 2);

  Serial.println(distanceInCm);
  delay(10);

  // Check if distance is less than a threshold value (adjust as needed)
  if (distanceInCm < 10) {
    // If object is too close, sound the buzzer
    digitalWrite(buzzer, HIGH);
  } else {
    // If object is not too close, turn off the buzzer
    digitalWrite(buzzer, LOW);
  }
}