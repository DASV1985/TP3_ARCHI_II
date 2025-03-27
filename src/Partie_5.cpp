

#include <Arduino.h>

int potPin = A2;    // Analog pin for the potentiometer
int ledPin = 9;     // PWM pin for the LED
int potValue = 0;   // Potentiometer value
int brightness = 0; // Brightmess of the LED (0-255)

void setup()
{
    pinMode(ledPin, OUTPUT); // Defines the pin A2(ledPin) as output
    Serial.begin(9600);      // Starts communication with pc
}

void loop()
{
    potValue = analogRead(potPin);               // Reads the value set by the potentiometer (0 à 1023)
    brightness = map(potValue, 0, 1023, 0, 255); // Converts the scale of 0-1023 to a scale 0-255
    analogWrite(ledPin, brightness);             // Sets the brightness
    Serial.print("Potentiometre : ");
    Serial.print(potValue);
    Serial.print(" -> Luminosite : ");
    Serial.println(brightness);
    delay(500); // Delay for readability
}