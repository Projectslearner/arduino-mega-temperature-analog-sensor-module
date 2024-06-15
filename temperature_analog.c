/*
    Project name : Temperature Analog sensor module
    Modified Date: 15-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-temperature-analog-sensor-module
*/

// Define the analog pin connected to the LM35 temperature sensor
const int sensorPin = A0;

void setup() {
  // Initialize serial communication at 9600 baudrate
  Serial.begin(9600);
}

void loop() {
  // Read the raw analog value from the temperature sensor
  int sensorValue = analogRead(sensorPin);
  
  // Convert the analog value to temperature in Celsius
  float temperatureC = (sensorValue * 5.0 / 1024.0) * 100.0;
  
  // Print the temperature to the Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");
  
  // Delay for a short period between readings
  delay(1000);
}
