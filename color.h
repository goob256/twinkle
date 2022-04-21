#ifndef COLOR_H
#define COLOR_H

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

void start_color();
void set_color(COLOR fore, bool f_bright, COLOR back);
void reset_color();

#endif // COLOR_H
