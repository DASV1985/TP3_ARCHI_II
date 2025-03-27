/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT); // Initialize the integrated LED as output
}

void loop() // Fonction is started in a loop
{
  digitalWrite(LED_BUILTIN, HIGH); // Turns the LED on (High is the voltage level)
  delay(1000);                     // waits for a second
  digitalWrite(LED_BUILTIN, LOW);  // Turns the LED of (Low is the voltage level)
  delay(4000);                     // Waits for 4 seconds
}
