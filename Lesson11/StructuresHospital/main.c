#include <stdio.h>
#include <string.h>

typedef struct patients_t {
	char surname[100];
	char firstname[100];
	long double rc;
	char disease[100];
	int insurance;
} patients_t;


int main(int argc, char * argv[])
{
	const int SIZE = 5;
	patients_t patients[SIZE];

	for (int i = 0; i < SIZE; i++) {
		printf("Enter the surname, name, birth number, disease, insurance company of the patient:\n");

		if (scanf("%s %s %Lf %s %d", patients[i].surname, patients[i].firstname, &patients[i].rc, patients[i].disease, &patients[i].insurance) != 5) {
			printf("Invalid input.\n");
			return 1;
		}
	}

	for (int i = 0; i < SIZE; i++) {
		if (strcmp(patients[i].disease, "tbc") == 0) {
			printf("The name and surname of patients with tbc:\n%s %s\n", patients[i].firstname, patients[i].surname);
		}
		
		if (patients[i].insurance == 211U) {
			printf("The name and surname of patients with the insurance company 211 is:\n%s %s\n", patients[i].firstname, patients[i].surname);
		}
	}

	printf("The surnames of all patients are:\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%s\n", patients[i].surname);
	}

	return 0;
}
