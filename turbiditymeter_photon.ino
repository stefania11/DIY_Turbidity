char result_light[64];

void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  
}

void loop() {
  digitalWrite(9, HIGH);
  int sensorFront = analogRead(A0);
  sprintf(result_light, "%d", sensorFront);
  
  Particle.publish("Light", result_light); //prints result online at dashboard.particle.io
  Serial.println(sensorFront); //print results locally in the serial monitor
  delay(1000);        // delay in between reads for stability
}
