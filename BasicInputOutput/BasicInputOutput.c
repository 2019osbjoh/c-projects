#include <stdio.h>

int main() {
	
	double radius, diameter, area;
	
	printf("\nEnter a radius to find the diameter: ");
	scanf("%lf", &radius);
			
	diameter = radius / 2.0F;
	area = 3.14159 * (radius * radius);

 	printf("\nThe given radius is: %g\n", radius);
	printf("The Diameter is: %g\n", diameter);	
	printf("The area is equal to around: %g\n\n", area);
	
	return 0;
}
