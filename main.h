
#ifndef __MAIN_H
#define __MAIN_H

#include "stm32h7xx_hal.h"

void SystemClock_Config(void);
void MX_GPIO_Init(void);
void MX_USART3_UART_Init(void);
void MX_CAN1_Init(void);

#endif /* __MAIN_H */
