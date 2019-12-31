#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int input, int primes) {
	for (int i = sqrt(input); i > 1; i--) {
		
		if (input % i == 0) {
			return false;
		}
	}
	return true;
}


int main() {
	int numPrimes = 0;
	int userIn = 0;
	bool prime;

	printf("\nRange to check for primes --> 0, ");	
	scanf("%d", &userIn);

	printf("Primes: ");
	for (int i = userIn; i > 1; i--) {

		prime = isPrime(i, numPrimes);

		if (prime) {
			printf("\n  %d", i);
			numPrimes++;
		}
	}
	
	printf("\n\nNumber of primes in list: %d", numPrimes);	
	printf("\n\n");
	
	return 0;
}
