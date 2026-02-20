#include <Arduino.h>
#define ldrPin A0
void setup() {
    // write your initialization code here
    Serial.begin(9600);
    pinMode(ldrPin, INPUT);
    Serial.println("LDR PIN");
}


void loop() {
    // write your code here
    int ldrRaw = analogRead(ldrPin);
    int lightPercent=map(ldrRaw, 0, 1023, 0, 100);
    Serial.println("LDR RAW :");
    Serial.println(ldrRaw);
    Serial.println("Light PERCENT : ");
    Serial.println(lightPercent);
    Serial.println("%");
    delay(1000);
}
