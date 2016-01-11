#include<stdio.h>

 
#define PI 3.14159

int main()
{
	float r;
	float a;
	printf("Enter the Radius of the circle:");
	scanf("%f", &r);
	a = PI*r*r;
	printf("\n The area is: %f", a);
	return 0;
}
