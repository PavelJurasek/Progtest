
#include <stdio.h>

int main()
{
    const int HOURS = 8; // hours spent at work
    
    const float PERCENTAGE = 0.07; // how many percent of visitors pay
    const int PRICE = 50; // how many visitors pay
    
    float income;
    int visitors, salary;
    
    
    printf("Enter number of visitors:\n");
    if (scanf("%d", &visitors) != 1 || visitors < 0) {
        printf("Invalid input.\n");
        return 1;
    }
    
    
    income = visitors * PERCENTAGE * PRICE;
    
    
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
    
    
    printf("The salary is: %d CZK\n", salary * HOURS);

    return 0;
}
