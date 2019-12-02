#include <stdio.h>
#include <math.h>

int main() {
	
	// https://www.mathscareers.org.uk/article/calculating-pi/
	// https://en.wikipedia.org/wiki/Leibniz_formula_for_%CF%80#Notes

	long double pi;
	long double num = 1.0;
	long long n;
	int denominator = 1;
	int i; 
	
	
	// ask for number of reps
	printf("\nEnter the number of repititions to determine accuracy of approximation: ");
	scanf("%lli", &n);	

	for(i = 0; i < n; i++) {
		denominator = denominator + 2;
		num = num - (1.0L / denominator);
		denominator = denominator + 2;
		num = num + (1.0L / denominator);
	}
	
	pi = num * 4.0L;

	printf("\nApproximation of pi ~ %.62Lf\n\n", pi);
 
	return 0;
}
