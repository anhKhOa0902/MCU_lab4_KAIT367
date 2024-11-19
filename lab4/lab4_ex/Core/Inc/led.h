/*
 * led.h
 *
 *  Created on: Nov 4, 2024
 *      Author: KAI_T367
 */
#include "main.h"
#ifndef INC_LED_H_
#define INC_LED_H_

void LedBlinking();
void amber_led();
void pink_led();
void white_led();
void time_run();
void display7SEG(int a);
void LEDScanning();
//void LEDScanningSec();
void dot_blink();
void offLed();

extern int hour;
extern int minute;
extern int second;


#endif /* INC_LED_H_ */
