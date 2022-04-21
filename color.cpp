#include <cstdio>
#ifdef _WIN32
#include <windows.h>
static HANDLE console;
#endif
#include "color.h"

void start_color()
{
#ifdef _WIN32
	console = GetStdHandle(STD_OUTPUT_HANDLE);
#endif
}

void set_color(COLOR fore, bool f_bright, COLOR back, bool b_bright)
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
		printf("\x1b[3%d;4%d;1m", c[fore], c[back]);
	}
	else {
		printf("\x1b[3%d;4%dm", c[fore], c[back]);
	}
#endif
}

void reset_color()
{
#ifdef _WIN32
	SetConsoleTextAttribute(console, WHITE);
#else
	printf("\x1b[0m");
#endif
}
