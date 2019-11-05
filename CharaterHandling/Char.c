#include <stdio.h>

int main() {
 	
	char ASCII;
	int integer;	

	printf("\nPlease enter a character: ");
	scanf("%c", &ASCII);
	printf("The integer value of that ASCII character is %i\n", ASCII);
	
	printf("\n");
	printf("----------------------------------------------------------");
	printf("\n");
	
	printf("\nPlease enter an intger between 0 - 127: ");
	scanf("%i", &integer);
	printf("The character is: %c\n\n", integer);
		
	printf("\n");
	printf("----------------------------------------------------------");
	printf("\n");

	char maths = 'A' + '\t';
	printf("\nA(65) + \\t(11) = %c(%d)\n", maths, maths);

	return 0;
}
