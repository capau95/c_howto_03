#include <stdio.h>
#include <math.h>

int main() {

	float i;

	for (i = 0; i <= 2 * M_PI; i += 0.1) {

		printf("sin(%.1f) = %.3f | ", i, sin(i));
		printf("cos(%.1f) = %.3f | ", i, cos(i));
		printf("tan(%.1f) = %.3f |\n", i, tan(i));

	}

	return 0;

}

