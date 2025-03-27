


#include <Arduino.h>

void setup() {
    Serial.begin(9600); // Starts communication with PC
}

void loop() {
    static int i = 0; // Local variable

    if (i <= 5) {
        Serial.print("i = ");
        Serial.println(i);
        i++;               // Increments i
        delay(1000);       // Waits 1 sec before repeating the loop
    }
}
