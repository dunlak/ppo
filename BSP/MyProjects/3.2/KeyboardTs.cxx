#include "KeyboardTs.h"
#include <stm32f429i_discovery_ts.h>
#include <stm32f429i_discovery_lcd.h>

TS_StateTypeDef TsState;

KeyboardTs::KeyboardTs(void) {

	BSP_TS_Init(BSP_LCD_GetXSize(), BSP_LCD_GetYSize());
}

enum KeyboardState KeyboardTs::eRead(void) {

	BSP_TS_GetState(&TsState);

	if(TsState.TouchDetected && TsState.X <= 80 ) {

		if(TsState.Y <= 80) {
			return BUTTON_3;
		} else if(TsState.Y > 80 && TsState.Y <= 160) {
			return BUTTON_2;
		} else if(TsState.Y > 160 && TsState.Y <= 240) {
			return BUTTON_1;
		} else {
			return BUTTON_0;
		}
	}
	else {
		return RELEASED;
	}
}
