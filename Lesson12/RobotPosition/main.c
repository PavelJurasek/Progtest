#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void error()
{
	printf("Invalid input.\n");
	exit(1);
}


int main(int argc, char *argv[])
{
	int count = 0;
	double x, y;
	double phi, v;
	double delta, omega;

	if (scanf("%d", &count) != 1 || count < 1) {
		error();
	}

	if (scanf("%lf %lf %lf %lf %lf %lf", &x, &y, &phi, &delta, &v, &omega) != 6) {
		error();
	}

	for (int i = 0; i < count; i++) {
		x = x + v * delta * cos(phi);
		y = y + v * delta * sin(phi);
		phi = phi + delta * omega;

		while (phi > 2 * M_PI) {
			phi -= 2*M_PI;
		}

		printf("x: %.2f, y: %.2f, phi: %.2f\n", x, y, phi);
	}

	return 0;
}
