

#include <Arduino.h>

const int ledPin = 13;            // variable defines the LED that controls the LED
int ledState = LOW;               // Initial state of the LED (OFF)
unsigned long previousMillis = 0; //
const long interval = 100;        // Blinking interval of 0.1 second (100 ms)

void setup()
{
  pinMode(ledPin, OUTPUT); // Selects the variable(pin) as output
}

void loop()
{
  unsigned long currentMillis = millis(); // Returns time since initial start or reset (in milliseconds)

  if (currentMillis - previousMillis >= interval)
  {
    previousMillis = currentMillis; // updates previousMillis for the next time the loop is called

    if (ledState == LOW)
    { // Inverts the state of the LED
      ledState = HIGH;
    }
    else
    {
      ledState = LOW;
    }

    digitalWrite(ledPin, ledState); // Applies the new state of the LED
  }
}
