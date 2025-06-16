#include "LedLcd.h"
#include <stm32f429i_discovery.h>
#include <stm32f429i_discovery_lcd.h>
#include <cstdio>


LedLcd::LedLcd(void) {

	BSP_LCD_Init();
}

void LedLcd::On(unsigned char ucLedIndex) {
	char cCharBuffer[4];
	for(unsigned char ucCounter = 0; ucCounter < 4; ucCounter++) {
		if(ucCounter == ucLedIndex) {
			BSP_LCD_SetTextColor(LCD_COLOR_GREEN);
		} else {
			BSP_LCD_SetTextColor(LCD_COLOR_BLUE);
		}
		BSP_LCD_FillRect(0, ucCounter * 80, 80, 80);
		BSP_LCD_SetTextColor(LCD_COLOR_GREEN);
		BSP_LCD_DrawRect(0, ucCounter * 80, 80, 80);
		BSP_LCD_SetTextColor(LCD_COLOR_WHITE);
		BSP_LCD_SetBackColor(LCD_COLOR_RED);
		sprintf(cCharBuffer, "%d", ucCounter + 1);
		BSP_LCD_DisplayStringAt(0, ucCounter * 80, (uint8_t*)cCharBuffer, LEFT_MODE);
	}

}
