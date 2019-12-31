#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
	size_t len = strlen(argv[1]);
	char * input = malloc(len + 1);
	if (input == NULL) {
		return 0;
	}
	
	strcpy(input, argv[1]);

	printf("\nOriginal string -> %s\n", input);	
	printf("Reverse string -> ");

	for (int i = strlen(input); i >= 0; i--) {
		printf("%c", input[i]);
	}
	printf("\n\n");

	return 0;
}
