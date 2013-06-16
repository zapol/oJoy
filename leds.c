#include "leds.h"
#include "stm32f10x.h"

void ledsInit(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;

    RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOC, ENABLE);

    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Pin = LED_R_BIT|LED_B_BIT|LED_G_BIT;
    GPIO_Init(LED_GPIO, &GPIO_InitStructure);
}

void ledOn(uint8_t n)
{
    LED_GPIO->BSRR = (1<<n);
}

void ledOff(uint8_t n)
{
    LED_GPIO->BRR = (1<<n);
}
