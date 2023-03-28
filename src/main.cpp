#include <Arduino.h>
#define sensorLDR A0 // optional
int nilaiSensor;

int ldrPin = A0; // LDR pin connected to analog pin A0

void setup() {
  Serial.begin(115200); // Initialize serial communication at 9600 bps
}

void loop() {
  int ldrValue = analogRead(ldrPin); // Read the analog value from the LDR pin
  Serial.print("LDR Value: ");
  Serial.println(ldrValue); // Print the LDR value on the serial monitor
  delay(500); // Wait for 500ms before taking the next reading
}