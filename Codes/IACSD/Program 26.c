//Accept two numbers and calculate GCD of them.
#include<stdio.h>

int main()
{
    int i,n1,n2,gcd = 1;
	printf("Enter Number 1\n");
	scanf("%d",&n1);
	printf("Enter Number 2\n");
	scanf("%d",&n2);
    
    for(i=1;i<=n1 || i<=n2;i++) 
	{
        if(n1%i==0 && n2%i==0)
		{
			gcd = i;
		}  
    }
    
    printf("The GCD of %d and %d is: %d",n1,n2,gcd);
} 