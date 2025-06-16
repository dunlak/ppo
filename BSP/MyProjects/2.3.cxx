#include <stm32f4xx_hal.h>
#include <stm32f429i_discovery.h>
#include <stm32f429i_discovery_lcd.h>
int main(void)
{
	BSP_LED_Init(LED4);
	BSP_LCD_Init();
	BSP_LCD_SetTextColor(LCD_COLOR_GREEN);
	BSP_LCD_SetBackColor(LCD_COLOR_BLUE);

	while (true) {
		BSP_LCD_DisplayChar(10, 20, 65);
		HAL_Delay(1000);
		BSP_LCD_DisplayChar(10, 20, 66);
		HAL_Delay(1000);
	}
}
