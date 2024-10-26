#include<stdio.h>
int main()
{
	int a;
	printf("Enter the the Number\n");
	scanf("%d",&a);
	
	if(a%5==0 && a%7==0)
	{
		printf("The Number is Divisible by 5 or 7\n");
	}
	else
	{
		printf("The Number is not Divisible by 5 or 7\n");
	}
}