// Write a program to accept two integers x and n and compute x raised to n. 
#include<stdio.h>
int main()
{
	int i,x,n,prod=1;
	printf("Enter Base\n");
	scanf("%d",&x);
	printf("Enter Power\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		prod=prod*x;
	}
	printf("%d is the Outcome of %d raised to %d\n",prod,x,n);
} 