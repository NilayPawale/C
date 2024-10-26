// Accept dimensions of a cylinder and print the surface area and volume (Hint: surface area = 2pr 2 + 2prh, 
// volume = p r 2 h). Define a constant variable pi=3.14.
#include <stdio.h>
#define pi 3.14
int main()
{
	int r,h;
	int surface_area,volume;
	printf("Enter the Radius of Cylinder\n");
	scanf("%d",&r);
	printf("Enter the Height of the Cylinder\n");
	scanf("%d",&h);
	surface_area=2*pi*r*r+2*pi*r*h;
	volume=pi*r*r*h;
	printf("The Surface Area of Cylinder is %d\n",surface_area);
	printf("The Volume of Cylinder is %d\n",volume);
} 