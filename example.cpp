#include <cstdio>
#include "twinkle.h"

int main(void)
{
	twinkle::start();

	twinkle::set(twinkle::RED, false, twinkle::WHITE, true);
	printf("OH");
	twinkle::set(twinkle::WHITE, true, twinkle::RED, false);
	printf("CANADA");
	twinkle::reset();
	printf("\n\n");

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 8; k++) {
				for (int l = 0; l < 2; l++) {
					twinkle::set((twinkle::COLOR)i, j, (twinkle::COLOR)k, l);
					printf("%d%d", i, k);
					twinkle::reset();
				}
			}
		}
		printf("\n");
	}

	printf("\n");

	return 0;
}
