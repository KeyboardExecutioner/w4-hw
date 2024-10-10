#include <Arduino.h>

void setup() {
  Serial.begin(115200);
}

void loop() {
  int adc = analogRead(LDR_PIN);
  Serial.print("adc: ");
  Serial.println(adc);
}