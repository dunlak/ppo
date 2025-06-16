#include "../3.3/LedLcd.h"

#include <stm32f429i_discovery.h>
#include <stm32f429i_discovery_lcd.h>
#include <cstdio>

unsigned char ucLedOffset;

LedLcd::LedLcd(unsigned char ucColumnIndex) {

	BSP_LCD_Init();
	if(ucColumnIndex < 3) {
		ucLedOffset = ucColumnIndex * 80;
	} else {
		ucLedOffset = 0;
	}
}

void LedLcd::On(unsigned char ucLedIndex) {
	char cCharBuffer[4];
	for(unsigned char ucCounter = 0; ucCounter < 4; ucCounter++) {
		if(ucCounter == ucLedIndex) {
			BSP_LCD_SetTextColor(LCD_COLOR_GREEN);
		} else {
			BSP_LCD_SetTextColor(LCD_COLOR_BLUE);
		}
		BSP_LCD_FillRect(ucLedOffset, ucCounter * 80, 80, 80);
		BSP_LCD_SetTextColor(LCD_COLOR_GREEN);
		BSP_LCD_DrawRect(ucLedOffset, ucCounter * 80, 80, 80);
		BSP_LCD_SetTextColor(LCD_COLOR_WHITE);
		BSP_LCD_SetBackColor(LCD_COLOR_RED);
		sprintf(cCharBuffer, "%d", ucCounter + 1);
		BSP_LCD_DisplayStringAt(ucLedOffset, ucCounter * 80, (uint8_t*)cCharBuffer, LEFT_MODE);
	}

}
