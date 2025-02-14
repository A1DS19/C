#include "../include/led.h"
#include <stdio.h>

void print_led_status(LED led) {
  printf("%s", led == LED_ON ? "ON" : "OFF");
}

