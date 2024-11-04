//Write a program that accepts numbers continuously as long as the number is 
positive and prints the sum of the given numbers. 
#include <stdio.h>
int main()
{
	int a,sum=0;
	printf("Enter a Number\n");
	while(1)// Using 1 so that loop to continuously get input until the user breaks out
	{
		scanf("%d",&a);
		if(a>0)
		{
			sum=sum+a;
		}
		else
		{
			break;
		}
	}
	printf("%d",sum);
} 