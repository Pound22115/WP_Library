#include "SimpleLED.h"
#include <Arduino.h>

void LED_ON() {
  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);
}

void LED_OFF() {
  pinMode(2, OUTPUT);
  digitalWrite(2, LOW);
}
