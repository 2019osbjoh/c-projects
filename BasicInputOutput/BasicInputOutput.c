#include <stdio.h>

int main() {
	
	int radius;
	double diameter, area;
	
	printf("Enter a radius to find the diameter: ");
	scanf("%i", &radius);
			
	diameter = (double) radius / 2;
	area = 3.14159 * (radius * radius);

 	printf("\nThe given radius is: %i\n", radius);
	printf("The Diameter is: %g\n", diameter);	
	printf("The area is equal to around: %g\n", area);
	
	return 0;
}
