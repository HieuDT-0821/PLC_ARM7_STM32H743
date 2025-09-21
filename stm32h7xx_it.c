
#include "stm32h7xx_it.h"
// Demo
void SysTick_Handler(void) {
    HAL_IncTick();
    HAL_SYSTICK_IRQHandler();
    HAL_IncTick_de();
}
