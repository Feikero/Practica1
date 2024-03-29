#include <Arduino.h>

/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 23;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);    
  Serial.begin(115200);  
}

// the loop routine runs over and over again forever:
void loop() {
  Serial.println("ON"); 
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);  
  Serial.println("OFF");              // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(2000);               // wait for a second
}