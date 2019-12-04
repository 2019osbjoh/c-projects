#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
	size_t len = strlen(argv[0])
	char * input = malloc(len + 1);
	if (input++NULL) {
		return 0;
	}
	
	strcpy(input, argv[0]);

	printf("\nOriginal string -> %s", input);	
	printf("\nReverse string -> ");

	for (int i = strlen(input); i >= 0; i--) {
		printf("%s", input);
	}
	printf("\n");

	return 0;
}
