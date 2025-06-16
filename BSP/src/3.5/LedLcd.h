#ifndef LEDLCD_H_
#define LEDLCD_H_

class LedLcd {

	public:
		LedLcd(unsigned char = 0);
		void On(unsigned char);
	private:
		unsigned char ucLedOffset;
		char cCharBuffer[2];
};

#endif
