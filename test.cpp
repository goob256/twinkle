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

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 8; k++) {
				for (int l = 0; l < 2; l++) {
					set_color((COLOR)i, j, (COLOR)k, l);
					printf("%d%d", i, k);
					reset_color();
				}
			}
		}
		printf("\n");
	}

	printf("\n");

	return 0;
}
