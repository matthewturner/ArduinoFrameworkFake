//
// Created by Richard on 10/01/2017.
//

#include <iostream>

#ifndef TRANSITION_ARDUINO_H
#define TRANSITION_ARDUINO_H

#define HIGH 0x1
#define LOW  0x0

typedef uint8_t byte;

uint32_t millis(void);
void delay(uint32_t ms_delay);
void pinMode(int, int);
void analogWrite(int, int);
void digitalWrite(int, int);
int digitalRead(int);
int analogRead(int);

#endif //TRANSITION_ARDUINO_H
