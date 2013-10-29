
#include <stdio.h>

int main()
{
	char input;
	int decimal = 0;
	
	printf("Input a binary number:\n");
	
	scanf("%c", &input);
	
	while (input != '\n') {
		if (input != '0' && input != '1') {
			printf("Invalid input.\n");
			return 1;
		}
		
		decimal = decimal * 2 + (input - '0');
		scanf("%c", &input);
	}
	
	printf("Decimal number is: %d\n", decimal);

	return 0;
}
