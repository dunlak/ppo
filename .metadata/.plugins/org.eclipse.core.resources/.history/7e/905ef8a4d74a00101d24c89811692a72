#include <stm32f4xx_hal.h>
#include <stm32f429i_discovery.h>
#include <stm32f429i_discovery_lcd.h>
#include <cstdio>
int main(void)
{
	BSP_LED_Init(LED4);
	BSP_LCD_Init();
	BSP_LCD_SetTextColor(LCD_COLOR_GREEN);
	BSP_LCD_SetBackColor(LCD_COLOR_BLUE);

	unsigned int uiCounter = 0;
	char cCharBuffer[sizeof(unsigned int)];



	while (true) {
		uiCounter++;
		sprintf(cCharBuffer,"%d",uiCounter);
		BSP_LCD_DisplayStringAt(10, 20, (uint8_t*)cCharBuffer, LEFT_MODE);
		HAL_Delay(300);
	}
}
