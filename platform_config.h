/******************** (C) COPYRIGHT 2010 STMicroelectronics ********************
* File Name          : platform_config.h
* Author             : MCD Application Team
* Version            : V3.2.1
* Date               : 07/05/2010
* Description        : Evaluation board specific configuration file.
********************************************************************************
* THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
* WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE TIME.
* AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY DIRECT,
* INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE
* CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING
* INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __PLATFORM_CONFIG_H
#define __PLATFORM_CONFIG_H

/* Define the STM32F10x hardware depending on the used evaluation board */
#define USB_DISCONNECT                      GPIOA
#define USB_DISCONNECT_PIN                  GPIO_Pin_10
#define RCC_APB2Periph_GPIO_DISCONNECT      RCC_APB2Periph_GPIOA
#define USB_DevConnect()                    (USB_DISCONNECT->CRH &= ~(0x01<<6))
#define USB_DevDisconnect()                 (USB_DISCONNECT->CRH |= 0x01<<6)


#define RCC_APB2Periph_GPIO_IOAIN           RCC_APB2Periph_GPIOA
#define GPIO_IOAIN0                          GPIOA
#define GPIO_IOAIN0_PIN                      GPIO_Pin_0   /* PC.04 */
#define GPIO_IOAIN1                          GPIOA
#define GPIO_IOAIN1_PIN                      GPIO_Pin_1   /* PC.04 */
#define GPIO_IOAIN2                          GPIOA
#define GPIO_IOAIN2_PIN                      GPIO_Pin_2   /* PC.04 */
#define GPIO_IOAIN3                          GPIOA
#define GPIO_IOAIN3_PIN                      GPIO_Pin_3   /* PC.04 */
#define GPIO_IOAIN4                          GPIOA
#define GPIO_IOAIN4_PIN                      GPIO_Pin_4   /* PC.04 */
#define GPIO_IOAIN5                          GPIOA
#define GPIO_IOAIN5_PIN                      GPIO_Pin_5   /* PC.04 */
#define ADC_AIN_CHANNEL                     ADC_Channel_0

/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

#endif /* __PLATFORM_CONFIG_H */

/******************* (C) COPYRIGHT 2010 STMicroelectronics *****END OF FILE****/

