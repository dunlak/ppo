#include <stm32f4xx_hal.h>
#include <stm32f429i_discovery.h>
#include <stm32f429i_discovery_lcd.h>
int main(void)
{
	BSP_LED_Init(LED4);
	BSP_LCD_Init();
	BSP_LCD_SetTextColor(LCD_COLOR_GREEN);
	BSP_LCD_DrawRect(10, 20, 40, 30);

	while (true) {
		BSP_LCD_SetTextColor(LCD_COLOR_GREEN);
		BSP_LCD_DrawRect(10, 20, 40, 30);
		HAL_Delay(100);
		BSP_LCD_SetTextColor(LCD_COLOR_YELLOW);
		BSP_LCD_DrawRect(10, 20, 40, 30);
		HAL_Delay(100);
	}
}
