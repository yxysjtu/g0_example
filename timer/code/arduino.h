#ifndef ARDUINO_H
#define ARDUINO_H

#include "include.h"

void led_on(void);
void led_off(void);
void led_toggle(void);

void delay(uint32_t ms);

uint16_t analogRead(void); //0-4095
void analogWrite(uint8_t channel, uint32_t duty); //channel:1-4, duty:0-999

#endif

