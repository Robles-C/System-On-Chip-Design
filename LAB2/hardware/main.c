/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "pico/time.h"
#include "pico/types.h"
#include <stdbool.h>
#define PICO_DEFAULT_LED_PIN 25

int main() {
#ifndef PICO_DEFAULT_LED_PIN
#warning blink example requires a board with a regular LED
#else
    //declarations
    const uint RED_LED = 15;
    const uint GRN_LED = 14;
    const uint YLW_LED = 13;
    const uint BUZZER = 10;
    const uint button = 16;
    char l = 'n';
    bool button_pressed, toggle;
    
    gpio_init(RED_LED);
    gpio_init(YLW_LED);
    gpio_init(GRN_LED);
    gpio_init(BUZZER);
    gpio_init(button);
    gpio_set_dir(RED_LED, GPIO_OUT);
    gpio_set_dir(YLW_LED, GPIO_OUT);
    gpio_set_dir(GRN_LED, GPIO_OUT);
    gpio_set_dir(BUZZER, GPIO_OUT);
    gpio_set_dir(button, GPIO_IN);

    while (true) {
    button_pressed = gpio_get(button);
    toggle = false;

    if(!toggle && button_pressed){
      toggle = true;
    }else if(toggle && button_pressed){
      toggle = false;
    }

    switch(l) {
      case 'r' :
        gpio_put(RED_LED, 1);
        gpio_put(YLW_LED, 0);
        gpio_put(GRN_LED, 0);
        gpio_put(BUZZER, 1);
        sleep_ms(5000);
        l = 'g';
      case 'y' :
        gpio_put(RED_LED, 0);
        gpio_put(YLW_LED, 1);
        gpio_put(GRN_LED, 0);
        gpio_put(BUZZER, 0);
        sleep_ms(5000);
        l='r';
      case 'g' :
        gpio_put(RED_LED, 0);
        gpio_put(YLW_LED, 0);
        gpio_put(GRN_LED, 1);
        gpio_put(BUZZER, 0);
        sleep_ms(2000);
        l = 'y';
      case 'o':
        gpio_put(RED_LED, 0);
        gpio_put(YLW_LED, 0);
        gpio_put(GRN_LED, 0);
        gpio_put(BUZZER, 0);
        sleep_ms(100);
        //return back to default
        l = 'n';
      default :
        if(toggle){
          l = 'r';
        }else{
          //do nothing
          l = 'o';
        }
   }
  }
#endif
}
