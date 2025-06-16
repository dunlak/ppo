#include <stm32f4xx_hal.h>
#include <stm32f429i_discovery.h>
#include <stm32f429i_discovery_lcd.h>
#include <stm32f429i_discovery_ts.h>
#include <cstdio>
int main(void)
{
	BSP_LED_Init(LED4);
	BSP_LCD_Init();
	BSP_TS_Init(BSP_LCD_GetXSize(), BSP_LCD_GetYSize());

	BSP_LCD_SetTextColor(LCD_COLOR_GREEN);
	BSP_LCD_SetBackColor(LCD_COLOR_BLUE);

	TS_StateTypeDef TsState;
	char cCharBuffer[17];

	while (true) {
		BSP_TS_GetState(&TsState);
		if(TsState.TouchDetected) {
			sprintf(cCharBuffer,"X=%d, Y=%d", TsState.X, TsState.Y);
		} else {
			sprintf(cCharBuffer,"************");
		}
		BSP_LCD_DisplayStringAt(10, 20, (uint8_t*)cCharBuffer, LEFT_MODE);
		HAL_Delay(50);
	}
}
