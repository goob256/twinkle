#ifndef TWINKLE_H
#define TWINKLE_H

#ifdef TWINKLE_BRITISH
#define COLOUR COLOR
#endif

namespace twinkle {

enum COLOR {
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
void set(COLOR fore, bool f_bright, COLOR back, bool b_bright);
void reset();

}

#endif // TWINKLE_H
