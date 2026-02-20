/**
* @file LDR_Read.ino
 * @brief Reads light intensity from an LDR sensor and prints values to Serial Monitor.
 *
 * This program reads the analog value from an LDR (Light Dependent Resistor)
 * connected to pin A0. The raw ADC value (0–1023) is converted into a
 * percentage (0–100%) and displayed via Serial Monitor every second.
 *
 * @author Alan Crozier
 * @date 2026-02-20
 */

#include <Arduino.h>

/**
 * @brief Analog pin connected to the LDR sensor.
 */
#define ldrPin A0

/**
 * @brief Arduino setup function.
 *
 * Initializes serial communication and configures the LDR pin as input.
 * Runs once when the board starts.
 */
void setup() {
    Serial.begin(9600);
    pinMode(ldrPin, INPUT);
    Serial.println("LDR PIN");
}

/**
 * @brief Arduino main loop function.
 *
 * Reads raw analog data from the LDR sensor, converts it into
 * a light intensity percentage, and prints both values to the
 * Serial Monitor every second.
 */
void loop() {

    /** Read raw analog value (0–1023) */
    int ldrRaw = analogRead(ldrPin);

    /** Convert raw value into percentage (0–100%) */
    int lightPercent = map(ldrRaw, 0, 1023, 0, 100);

    Serial.println("LDR RAW :");
    Serial.println(ldrRaw);

    Serial.println("Light PERCENT : ");
    Serial.println(lightPercent);
    Serial.println("%");

    delay(1000);
}