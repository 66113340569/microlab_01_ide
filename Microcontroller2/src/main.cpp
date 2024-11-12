#include <Arduino.h>
int ledPin = 100;
int width = 3;
int area;

void blinkLed(int times);

void setup() {
   pinMode(ledPin, OUTPUT);
   Serial.begin(9600);
}

void loop() {
 blinkLed(4);
 delay(3000);
}

void blinkLed(int times){
 int count = 0;
 while(count < times){
  digitalWrite(ledPin,HIGH);
  delay(500); 
  digitalWrite(ledPin,LOW);
   delay(500);
   count++;
 }
}

