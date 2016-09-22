#include "mbed.h"

//test setting up an mbed pin as a class member initialized in the constructor
class flasher {
public:
	DigitalOut DO1;
	DigitalOut DO2;

	flasher() :
			DO1(P2_0), DO2(P2_1) {
	}

	void flash(void) {
		DO1 = 1;
		wait(0.05);
		DO1 = 0;
		wait(0.25);
		DO2 = 1;
		wait(0.05);
		DO2 = 0;
		wait(0.25);
	}
};

int main() {
	flasher ff;

	while (1) {
		ff.flash();
		wait(0.25);
	}
}
