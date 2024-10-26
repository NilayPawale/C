#include <stdio.h>
#define pi 3.14
int main()
{
	int i,rad,l,b,base,height;
	float area;

	printf("Enter the Action to be Performed\n");
	printf("1.Area of Circle\n 2.Area of Reactangle\n 3.Area of Triangle\n");
	scanf("%d",&i);

	switch(i)
	{
		case 1:
			printf("Enter the Radius\n");
			scanf("%d",&rad);
			area=pi*rad*rad;
			printf("Area of Circle is %f\n",area);
			break;

		case 2:
			printf("Enter the Length and Breadth\n");
			scanf("%d %d",&l,&b);
			area=l*b;
			printf("Area of Rectangle is %f\n",area);
			break;
		case 3:
			printf("Enter the Base and Height\n");
			scanf("%d %d",&base,&height);
			area=(base * height) / 2;
			printf("Area of Triangle is %f\n",area);
			break;
	}
} 