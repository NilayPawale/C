#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the First Angle of Triangle\n");
	scanf("%d",&a);
	printf("Enter the Second Angle of Triangle\n");
	scanf("%d",&b);
	printf("Enter the Third Angle of Triangle\n");
	scanf("%d",&c);
	
	if(a+b+c==180)
	{
		printf("The Triangle is Valid\n");
	}
	else
	{
		printf("The Triangle is not Valid\n");
	}
} 