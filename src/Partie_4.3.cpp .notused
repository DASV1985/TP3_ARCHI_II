


#include <Arduino.h>

int min = 12;
int max = 18;
int reponse;

void setup() {
    Serial.begin(9600);
    Serial.println("Quel est votre age?");
}

void loop() {
    if(Serial.available() > 0){
        reponse = Serial.parseInt();
        Serial.println(reponse);
        if(reponse < min) (Serial.println("Énfant"));
        else if(reponse <= max) (Serial.println("Adolecent"));
        else if(reponse > max) (Serial.println("Adulte"));
    }
    
}