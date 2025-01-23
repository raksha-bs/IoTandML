#include <Wire.h> // Include the Wire library for I2C communication
#include <Adafruit_Sensor.h>
#include <Adafruit_ADXL345_U.h>

Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified(12345); // Use address 0x12345, or whatever address your sensor is at

void setup() {
  Serial.begin(9600); // Initialize serial communication
  Serial.println("ADXL345 test"); // Print a test message
  
  if(!accel.begin()) { // Initialize the ADXL345 sensor
    Serial.println("Ooops, no ADXL345 detected ... Check your wiring?");
    while(1);
  }
}

void loop() {
  sensors_event_t event; 
  accel.getEvent(&event); // Read the accelerometer data
  
  // Print the acceleration values on the serial monitor
  Serial.print("X: "); Serial.print(event.acceleration.x);
  Serial.print("  \tY: "); Serial.print(event.acceleration.y); 
  Serial.print("  \tZ: "); Serial.println(event.acceleration.z);
  
  delay(100); // Delay for stability
}
