#include <Arduino.h>

int i = 0;

void setup() {
    Serial.begin(9600);
    Serial.println("Hello Codeanywhere!");
}

void loop() {
    /*  serial echo */
    while (Serial.available()) {
        Serial.write(Serial.read());
    }

    i++;
    Serial.println(i);
    delay(100);
}