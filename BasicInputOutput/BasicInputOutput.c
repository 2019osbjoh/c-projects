#include <stdio.h>

int main() {
	
	double radius, diameter, area;
	
	printf("\nEnter a radius to find the diameter: ");
	scanf("%lf", &radius);
			
	diameter = radius * 2.0F;
	area = 3.141592653589793238462643383 * (radius * radius);

 	printf("\nThe given radius is: %f\n", radius);
	printf("The Diameter is: %f\n", diameter);	
	printf("The area is equal to around: %f\n\n", area);
	
	return 0;
}
