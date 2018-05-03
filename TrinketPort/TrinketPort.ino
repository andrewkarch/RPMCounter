#include <Wire.h>
#include <TinyWireM.h>
#include "Adafruit_VL6180X.h"
Adafruit_VL6180X vl = Adafruit_VL6180X();


  int time_since_last_trigger = 1001;
void setup() {
  pinMode(1, OUTPUT);
  if (! vl.begin()) {
    while (1);
  }
}

void loop() {
  uint8_t range = vl.readRange();
  uint8_t status = vl.readRangeStatus();

  if (status == VL6180X_ERROR_NONE) {
    if (range < 100) {
      time_since_last_trigger = 0;
    }
  }
  if (time_since_last_trigger > 1000) {
    digitalWrite(1, HIGH);
  }    
  if (time_since_last_trigger < 1000) {
    digitalWrite(1, LOW);
  }    
  time_since_last_trigger++;
}
