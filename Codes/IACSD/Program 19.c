#include <stdio.h>
#define pi 3.14
int main()
{
	int rad,i;
	float area,circum,vol;
	printf("Enter the Radius\n");
	scanf("%d",&rad);

	printf("Enter the Action to be Performed\n");
	printf("1.Area of Circle\n 2.Circumference of Circle\n 3.Volume of Sphere\n");
	scanf("%d",&i);

	switch(i)
	{
		case 1:
			area=pi*rad*rad;
			printf("Area of Circle is %f\n",area);
			break;

		case 2:
			circum=2*pi*rad;
			printf("Circumference of Circle is %f\n",circum);
			break;
		case 3:
			vol=(4/3)*pi*(rad*rad*rad);
			printf("Volume of Sphere is %f\n",vol);
			break;
	}
} 