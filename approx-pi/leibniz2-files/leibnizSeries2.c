#include <stdio.h>
#include <math.h>

int main() {
	
	// https://www.mathscareers.org.uk/article/calculating-pi/
	// https://en.wikipedia.org/wiki/Leibniz_formula_for_%CF%80#Notes

	long double pi;
	long double num = 0.0;
	long double sign = 1.0;
	long long n;
	int i; 
	
	
	// ask for number of reps
	printf("\nEnter the number of terms to determine approximation: ");
	scanf("%lli", &n);	

	for(i = 0; i < n; i++) {
		num += sign / (2.0F * i + 1.0F);
		sign = -sign;
	}
	
	pi = num * 4.0L;

	printf("\nApproximation of pi ~ %.62Lf\n\n", pi);
 
	return 0;
}
