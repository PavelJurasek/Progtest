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
	double *v1, *v2;
	double power1 = 0, power2 = 0, product = 0;
	int count;

	if (scanf("%d", &count) != 1 || count < 1) {
		error();
	}

	v1 = (double *) malloc(sizeof(double) * count);
	v2 = (double *) malloc(sizeof(double) * count);

	for (int i = 0; i < count; i++) {
		if (scanf("%lf", &v1[i]) != 1) {
			free(v1);
			free(v2);
			error();
		}
	}

	for (int i = 0; i < count; i++) {
		if (scanf("%lf", &v2[i]) != 1) {
			free(v1);
			free(v2);
			error();
		}
	
		power1 += (v1[i] * v1[i]);
		power2 += (v2[i] * v2[i]);

		product += (v1[i] * v2[i]);
	}

	printf("CSM: %.3f\n", product / (sqrt(power1) * sqrt(power2)));

	free(v1);
	free(v2);

	return 0;
}
