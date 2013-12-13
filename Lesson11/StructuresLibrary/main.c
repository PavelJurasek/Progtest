#include <stdio.h>
#include <string.h>

typedef struct book_t {
	int id;
	char name[30];
	char firstname[30];
	char surname[30];
	char genre[30];
	int year;
	int price;
} book_t;


int main(int argc, char * argv[])
{
	const int SIZE = 5;
	book_t books[SIZE];

	for (int i = 0; i < SIZE; i++) {
		printf("Enter the book name, author surname, name, genre, year, price and id:\n");

		if (scanf("%s %s %s %s %d %d %d", books[i].name, books[i].surname, books[i].firstname, 
				books[i].genre, &books[i].year, &books[i].price, &books[i].id) != 7
		) {
			printf("Invalid input.\n");
			return 1;
		}
	}

	printf("Novels are:\n");
	for (int i = 0; i < SIZE; i++) {
		if (strcmp(books[i].genre, "roman") == 0) {
			printf("%s\n", books[i].name);
		}
	}

	printf("\nBooks with price lower than 300,- Kc are:\n");
	for (int i = 0; i < SIZE; i++) {
		if (books[i].price < 300) {
			printf("%s\n", books[i].name);
		}
	}

	printf("\nSurnames of all authors are:\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%s\n", books[i].surname);
	}

	return 0;
}
