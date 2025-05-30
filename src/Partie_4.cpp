

#include <Arduino.h>

int DEL = 13; // Defines the variable
int EtatDEL;  // Start the variable

void setup()
{
    Serial.begin(9600);                                                                     // Starts communication with the pc
    pinMode(DEL, OUTPUT);                                                                   // Initialise the LED as the output
    Serial.println("Envoyer << 1 >> pour allumer le DEL et  << 0 >> pour éteindre le DEL"); // Prints the user instructions
}

void loop()
{
    EtatDEL = Serial.read(); // Defines the variable by the the imput of the user
    if (EtatDEL == '1')
    {
        digitalWrite(DEL, HIGH);
        Serial.println("DEL allumée");
    } // If imput of the user is 1 LED turns ON
    if (EtatDEL == '0')
    {
        digitalWrite(DEL, LOW);
        Serial.println("DEL éteint");
    } // If imput of hte user is 0 LEd turns OFF
}
