#include <math.h>
#include <stdio.h>

double calculate(double radius, double height);

int main(void)
{
	double radius, height, volume;

	printf("Enter the radius of the cylinder: ");
	scanf("%lf", &radius);
	
	printf("Enter the height of the cylinder: ");
	scanf("%lf", &height);
	
	volume = calculate(radius, height);
	
	printf("Volume of the cylinder is %lf", volume);
	
	return(0);
	
	
}

double calculate(double radius, double height)
{

	double result;
	result = M_PI * radius * radius * height;
	return result;

}
