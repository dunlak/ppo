#include <stm32f4xx_hal.h>
#include <stm32f429i_discovery.h>
#include <stm32f429i_discovery_lcd.h>
int main(void)
{
	BSP_LED_Init(LED4);
	BSP_LCD_Init();
	BSP_LCD_SetTextColor(LCD_COLOR_GREEN);
	BSP_LCD_SetBackColor(LCD_COLOR_BLUE);

	unsigned char ucCharArray[2][9] = {{"Alpha"},{"Centauri"}};

	while (true) {
		BSP_LCD_Clear(LCD_COLOR_BLACK);
		BSP_LCD_DisplayStringAt(10, 20, ucCharArray[0], LEFT_MODE);
		HAL_Delay(1000);
		BSP_LCD_Clear(LCD_COLOR_BLACK);
		BSP_LCD_DisplayStringAt(10, 20, ucCharArray[1], LEFT_MODE);
		HAL_Delay(1000);
	}
}
