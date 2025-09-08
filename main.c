
#include "main.h"

int main(void) {
    HAL_Init();                     // Khởi tạo Hardware Abstraction Layer
    SystemClock_Config();            // Cấu hình clock
    MX_GPIO_Init();                  // Khởi tạo GPIO
    MX_USART3_UART_Init();           // Khởi tạo UART cho giao tiếp
    MX_CAN1_Init();                  // Khởi tạo CAN cho PLC

    while (1) {
        // Code điều khiển PLC
        // Code điều khiển PLC
        HAL_Delay(500);
        HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_0);  // Nhấp nháy LED kiểm tra
        HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_0);  // Nhấp nháy LED kiểm tra

        HAL_Delay(500);
    }
}
