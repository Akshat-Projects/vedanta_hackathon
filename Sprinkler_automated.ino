// Import the necessary libraries
#include <Arduino.h>
#include <MQ135.h>

// Define the pins for the sensors and the water pump
int pirPin = 3;
int gasPin = 2;
int pumpPin = 13;

// Create objects for the sensors
MQ135 gasSensor(gasPin);

// Initialize the variables
int gasLevel;
int peopleDetected;

// Public method to call the getRZero() method
float getGasLevel() {
  return gasSensor.getRZero();
}

void setup() {
  // Set the pins as inputs and outputs
  pinMode(pirPin, INPUT);
  pinMode(pumpPin, OUTPUT);

  // Initialize the serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the values from the sensors
  gasLevel = getGasLevel();
  peopleDetected = digitalRead(pirPin);

  // Check if the pollution level is above a certain threshold and if no people are detected
  if (gasLevel > 0 && peopleDetected == LOW) {
    // Turn on the water pump
    digitalWrite(pumpPin, HIGH);
  } else {
    // Turn off the water pump
    digitalWrite(pumpPin, LOW);
  }

  // Print the values to the serial monitor
  Serial.print("Gas level: ");
  Serial.println(gasLevel);
  Serial.print("People detected: ");
  Serial.println(peopleDetected);

  // Wait for a second before looping again
  delay(1000);
}
