
void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(9, HIGH);
  int sensorFront = analogRead(A0);
  Serial.println(sensorFront);
  delay(200);        // delay in between reads for stability
}
