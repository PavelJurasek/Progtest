
#include <stdio.h>

int salary(int income);

int main()
{
	// percentage of people visiting the carousel
	const float PERCENTAGE = 0.07;
	// price of carousel
	const int PRICE = 50;
    float visitors, income;

    printf("Enter number of visitors:\n");
    
	if (scanf("%f", &visitors) != 1 || visitors < 0) {
		printf("Invalid input.\n");
		return 1;
	}
    
	// real amount of people visiting the carousel
    visitors = visitors * PERCENTAGE;
    
	// income on carousel
    income = visitors * PRICE;
    
    printf("The salary is: %d CZK\n", salary(income));
    
    return 0;
}

// calculates calary with respect to income of carousel
int salary(int income)
{
	const int HOURS_WORKED = 8;
    int salary = 0;

    if (income < 2000) {
        salary = 70;
	} else if (income < 2500) {
        salary = 80;
	} else if (income < 3000) {
        salary = 90;
	} else if (income < 3500) {
        salary = 100;
	} else {
		salary = 110;
	}
    
    return salary * HOURS_WORKED;
}
