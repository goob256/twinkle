#ifndef TWINKLE_H
#define TWINKLE_H

#ifdef TWINKLE_BRITISH
#define TWINKLE_COLOUR TWINKLE_COLOR
#endif

namespace twinkle {

enum TWINKLE_COLOR {
	BLACK = 0,
	BLUE,
	GREEN,
	CYAN,
	RED,
	PURPLE,
	YELLOW,
	WHITE
};

void start();
void set(TWINKLE_COLOR fore, bool f_bright, TWINKLE_COLOR back, bool b_bright);
void reset();

int getch();

}

#endif // TWINKLE_H
