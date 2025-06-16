#include <stm32f4xx_hal.h>
#include <stm32f429i_discovery.h>
#include <stm32f429i_discovery_lcd.h>
#include <stm32f429i_discovery_ts.h>

int main(void) {

	BSP_LCD_Init();
	BSP_TS_Init(BSP_LCD_GetXSize(), BSP_LCD_GetYSize());

	BSP_LCD_SetBackColor(LCD_COLOR_RED);
	BSP_LCD_SetFont(&Font24);

	TS_StateTypeDef TS_State;

	while (true) {

		BSP_TS_GetState(&TS_State);

		if (TS_State.TouchDetected) {
			if (TS_State.X > 0 && TS_State.X < 80 && TS_State.Y > 0 && TS_State.Y < 80){
				BSP_LCD_SetTextColor(LCD_COLOR_GREEN);
				BSP_LCD_FillRect(0, 240, 80, 80);
				BSP_LCD_SetTextColor(LCD_COLOR_WHITE);
				BSP_LCD_DisplayChar(0, 240, '3');
			}
			if (TS_State.X > 0 && TS_State.X < 80 && TS_State.Y > 80 && TS_State.Y < 160){
				BSP_LCD_SetTextColor(LCD_COLOR_GREEN);
				BSP_LCD_FillRect(0, 160, 80, 80);
				BSP_LCD_SetTextColor(LCD_COLOR_WHITE);
				BSP_LCD_DisplayChar(0, 160, '2');
			}
			if (TS_State.X > 0 && TS_State.X < 80 && TS_State.Y > 160 && TS_State.Y < 240){
				BSP_LCD_SetTextColor(LCD_COLOR_GREEN);
				BSP_LCD_FillRect(0, 80, 80, 80);
				BSP_LCD_SetTextColor(LCD_COLOR_WHITE);
				BSP_LCD_DisplayChar(0, 80, '1');
			}
			if (TS_State.X > 0 && TS_State.X < 80 && TS_State.Y > 240 && TS_State.Y < 320){
				BSP_LCD_SetTextColor(LCD_COLOR_GREEN);
				BSP_LCD_FillRect(0, 0, 80, 80);
				BSP_LCD_SetTextColor(LCD_COLOR_WHITE);
				BSP_LCD_DisplayChar(0, 0, '0');
			}

		} else {
			for (unsigned char ucRectCounter = 0; ucRectCounter < 4; ucRectCounter++) {
					unsigned int uiYPos = ucRectCounter * 80;
					BSP_LCD_SetTextColor(LCD_COLOR_BLUE);
					BSP_LCD_FillRect(0, uiYPos, 80, 80);
					BSP_LCD_SetTextColor(LCD_COLOR_GREEN);
					BSP_LCD_DrawRect(0, uiYPos, 80, 80);
				}
				BSP_LCD_DrawLine(0, 319, 80, 319);

				BSP_LCD_SetTextColor(LCD_COLOR_WHITE);
				for (unsigned char ucNumberCounter=0; ucNumberCounter < 4; ucNumberCounter++){
					BSP_LCD_DisplayChar(0, ucNumberCounter * 80, '0' + ucNumberCounter);
				}
		}

		HAL_Delay(100);
	}
}

