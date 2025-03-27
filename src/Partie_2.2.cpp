

#include <Arduino.h>

const int ledPin = 13;

int ledState = LOW;
unsigned long previousMillis = 0;
unsigned long startMillis = 0;

const long interval1 = 3000; // 3 seconds
const long interval2 = 2000; // 2 seconds
const long switchAfter = 60000; // 60 seconds (1 minute)

void setup() {
  pinMode(ledPin, OUTPUT);
  startMillis = millis(); // Saves the time at which the program begins
}

void loop() {
  unsigned long currentMillis = millis();

  long currentInterval = (currentMillis - startMillis < switchAfter) ? interval1 : interval2; // Determines which interval to use

  if (currentMillis - previousMillis >= currentInterval) {
    previousMillis = currentMillis;

    ledState = (ledState == LOW) ? HIGH : LOW; // Inverts the LED state
    digitalWrite(ledPin, ledState);
  }
}
