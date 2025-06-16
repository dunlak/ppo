#include "KeyboardTsLcd.h"

KeyboardTsLcd::KeyboardTsLcd(unsigned char _ucColumn) {

	pKeyboard = new KeyboardTs(_ucColumn);
	pLed = new LedLcd(_ucColumn);
};

enum KeyboardState KeyboardTsLcd::eRead(void) {
    KeyboardState state = pKeyboard->eRead();

    if (state >= BUTTON_0 && state <= BUTTON_3) {
        pLed->On(state - BUTTON_0);
    } else {
        pLed->On(4);
    }

    return state;
}
