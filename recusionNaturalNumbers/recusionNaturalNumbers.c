#include <stdio.h>

int sum(int n);

int main() {
	int number, result;

	printf("Enter a positive Int: ");
	scanf("%d", &number);

	result = sum(number);

	printf("sum = %d", result);
	printf("\n");
	return 0; 
}

int sum(int num) {
	if (num != 0)
		return num + sum(num - 1);
	else
		return num;
}
