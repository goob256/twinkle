#include <cstdio>
#include "color.h"

int main(void)
{
	start_color();

	set_color(RED, false, WHITE);
	printf("OH");
	set_color(WHITE, true, RED);
	printf("CANADA");
	reset_color();
	printf("\n");
}
