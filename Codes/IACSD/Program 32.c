//Accept the radius from user and compute the area and circumference of a circle. 
#include <stdio.h>
int main()
{
	float radius;
	float area;
	float circumference;
	printf("Enter the Radius\n");
	scanf("%f",&radius);
	area=3.14*radius*radius;
	circumference=2*3.14*radius;
	printf("The Area of Circle is : %f\n",area);
	printf("The Circumference of Circle is : %f\n",circumference);
}