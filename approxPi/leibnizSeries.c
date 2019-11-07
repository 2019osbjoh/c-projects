#include <stdio.h>
#include <math.h>

int main() {
	
	// https://www.mathscareers.org.uk/article/calculating-pi/
	// https://en.wikipedia.org/wiki/Leibniz_formula_for_%CF%80#Notes

	long double pi;
	long double num = 1.0;
	int denominator = 1;
	
	int n = 0;	
	
	// ask for number of reps
	
	for(n = 0; n < 100000; n++) {
		denominator = denominator + 2;
		num = num - (1.0L / denominator);
		denominator = denominator + 2;
		num = num + (1.0L / denominator);
	}
	
	pi = num * 4.0L;

	printf("\nApproximation of pi ~ %.62Lf\n\n", pi);
 
	return 0;
}
