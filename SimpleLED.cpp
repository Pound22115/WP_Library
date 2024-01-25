#include "SimpleLED.h"
#include <Arduino.h>

void LED(int led_num,int action) {

if(led_num == 1)
{
  pinMode(2, OUTPUT);
  digitalWrite(2, action);
}

  
}