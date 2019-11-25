#include <stdio.h>

int main() {
	// Calculates prime numbers by removing multiples interatively from a list
	int i;
	int a = 5;
	int list[a];
	
	printf("\n");
	for (i = 0; i < 5; i++) {
		printf("Enter a number: ");	
		scanf("%d", &list[i]);
	}
	
	printf("\nNumbers: ");
	for (i = 0; i < 5; i++) {
		printf("%d ", list[i]);
	}
	printf("\n");	

	return 0;
	
}
