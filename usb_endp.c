/******************** (C) COPYRIGHT 2010 STMicroelectronics ********************
* File Name          : usb_endp.c
* Author             : MCD Application Team
* Version            : V3.2.1
* Date               : 07/05/2010
* Description        : Endpoint routines
********************************************************************************
* THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
* WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE TIME.
* AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY DIRECT,
* INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE
* CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING
* INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
*******************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"
#include "stm32f10x.h"
#include "usb_lib.h"
#include "usb_istr.h"
#include "leds.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
uint8_t Receive_Buffer[2];

/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
/*******************************************************************************
* Function Name  : EP1_OUT_Callback.
* Description    : EP1 OUT Callback Routine.
* Input          : None.
* Output         : None.
* Return         : None.
*******************************************************************************/
void EP1_OUT_Callback(void)
{
    BitAction Led_State;

    /* Read recieved data (2 bytes) */
    USB_SIL_Read(EP1_OUT, Receive_Buffer);

    if (Receive_Buffer[1] == 0)
    {
        Led_State = Bit_RESET;
    }
    else
    {
        Led_State = Bit_SET;
    }


    switch (Receive_Buffer[0])
    {
    case 1: /* Led 1 */
        if (Led_State != Bit_RESET)
        {
            ledOn(LED_R);
        }
        else
        {
            ledOff(LED_R);
        }
        break;
    case 2: /* Led 2 */
        if (Led_State != Bit_RESET)
        {
            ledOn(LED_G);
        }
        else
        {
            ledOff(LED_G);
        }
        break;
    case 3: /* Led 3 */
        if (Led_State != Bit_RESET)
        {
            ledOn(LED_B);
        }
        else
        {
            ledOff(LED_B);
        }
        break;
    default:
        ledOff(LED_R);
        ledOff(LED_G);
        ledOff(LED_B);
        break;
    }

#ifndef STM32F10X_CL
    SetEPRxStatus(ENDP1, EP_RX_VALID);
#endif /* STM32F10X_CL */

}

/******************* (C) COPYRIGHT 2010 STMicroelectronics *****END OF FILE****/

