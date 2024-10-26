#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Number a\n");
	scanf("%d",&a);
	printf("Enter Number b\n");
	scanf("%d",&b);
	printf("Enter Number c\n");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("%d is Greater Number\n",a);
	}
	else if(b>a && b>c)
	{
		printf("%d is Greater Number\n",b);
	}
	else if(c>a && c>b)
	{
		printf("%d is Greater Number\n",c);
	}
} 