#include <stdio.h>
int main()
{
	int i,a,ans=0,b=0;
	printf("Enter any Number\n");
	scanf("%d",&a);
	b=a/2;
	for(i=1;i<=b;i++)
	{
		if(i%a==0)
		{
			printf("The no is not prime");
			ans=1;
			break;
		}
	}
}
if(ans==0)
{
	printf("The no is prime");
}
