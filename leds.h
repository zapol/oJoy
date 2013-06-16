#ifndef __LEDS_H
#define __LEDS_H

#include <stdint.h>

#define LED_GPIO    GPIOC
#define LED_R       0
#define LED_G       2
#define LED_B       4
#define LED_R_BIT   (1<<LED_R)
#define LED_G_BIT   (1<<LED_G)
#define LED_B_BIT   (1<<LED_B)

void ledsInit(void);
void ledOn(uint8_t n);
void ledOff(uint8_t n);

#endif // __LEDS_H
