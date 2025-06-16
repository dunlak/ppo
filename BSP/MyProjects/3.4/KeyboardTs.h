#ifndef KEYBOARDTS_H_
#define KEYBOARDTS_H_

enum KeyboardState{
	RELEASED,
	BUTTON_0,
	BUTTON_1,
	BUTTON_2,
	BUTTON_3
};

class KeyboardTs {

	public:
		KeyboardTs(unsigned char = 0);
		enum KeyboardState eRead(void);
	private:
			unsigned char ucKeyboardOffset;
};

#endif /* KEYBOARDTS_H_ */
