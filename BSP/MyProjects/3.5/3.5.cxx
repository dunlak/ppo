#include <stm32f4xx_hal.h>
#include "KeyboardTsLcd.h"
#include "LedLcd.h"

int main() {
	KeyboardTsLcd KeyboardLeft(0);
	LedLcd LedRight(2);
	while(1) {
		switch(KeyboardLeft.eRead()) {
			case BUTTON_0:
				LedRight.On(3);
				break;
			case BUTTON_1:
				LedRight.On(2);
				break;
			case BUTTON_2:
				LedRight.On(1);
				break;
			case BUTTON_3:
				LedRight.On(0);
				break;
			default:
				LedRight.On(4);
				break;
		}
		HAL_Delay(100);
	}
}
