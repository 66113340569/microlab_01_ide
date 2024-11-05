#include <Arduino.h>



void setup() {
 // Initialize the LED digital pin as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
 digitalWrite(LED_BUILTIN, HIGH);   // Turn the LED on
  delay(100);                   // Wait for 1 second (1000 milliseconds)
  digitalWrite(LED_BUILTIN, LOW);    // Turn the LED off
  delay(100);                   // Wait for 1 second
}


