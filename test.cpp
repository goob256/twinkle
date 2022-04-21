#include <cstdio>
#include "color.h"

int main(void)
{
	start_color();

	set_color(RED, false, WHITE, true);
	printf("OH");
	set_color(WHITE, true, RED, false);
	printf("CANADA");
	reset_color();
	printf("\n");
}
