void setup() {
  pinMode(7, INPUT);       // Set pin 7 as input to read sensor data
  Serial.begin(9600);      // Start serial communication at 9600 bps
}

void loop() {
  int sensorValue = digitalRead(7);  // Read the value from the IR sensor
  Serial.print("Sensor Status: ");
  Serial.println(sensorValue);       // Print sensor value to Serial Monitor

  // Delay for half a second
}
