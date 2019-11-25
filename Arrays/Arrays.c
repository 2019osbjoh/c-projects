#include <stdio.h>

void display(int a[], int num) {
	int x;

	printf("\nnumbers: ");	

	for (x = 0; x < num; x++) {
		printf("%d ", a[x]);
	}
}


void input(int a[], int num) {
	int x;

	for (x = 0; x < num; x++) {
		printf("Enter an element: ");
		scanf("%d", &a[x]);
	}
} 


int main() {
	// Calculates prime numbers by removing multiples interatively from a list
	int length = 10;
	int i;
	int list[length];
	
	printf("\n");

	input(list, length);
	display(list, length);

	printf("\n\n");	

	return 0;
}
