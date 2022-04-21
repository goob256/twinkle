#include <cstdio>
#ifdef _WIN32
#include <windows.h>
static HANDLE console;
#endif
#include "twinkle.h"

namespace twinkle {

void start()
{
#ifdef _WIN32
	console = GetStdHandle(STD_OUTPUT_HANDLE);
#endif
}

void set(COLOR fore, bool f_bright, COLOR back, bool b_bright)
{
#ifdef _WIN32
	int c = (int)fore;
	if (f_bright) {
		c += 8;
	}
	int b = (int)back;
	b *= 16;
	c += b;
	if (b_bright) {
		c |= BACKGROUND_INTENSITY;
	}
	SetConsoleTextAttribute(console, c);
#else
	int c[8] = {
		0,
		4,
		2,
		6,
		1,
		5,
		3,
		7
	};

	if (f_bright) {
		printf("\x1b[3%d;1m", c[fore]);
	}
	else {
		printf("\x1b[3%dm", c[fore]);
	}

	if (b_bright) {
		printf("\x1b[48;5;%dm", c[back]+8);
	}
	else {
		printf("\x1b[4%dm", c[back]);
	}
#endif
}

void reset()
{
#ifdef _WIN32
	SetConsoleTextAttribute(console, WHITE);
#else
	printf("\x1b[0m");
#endif
}

}
