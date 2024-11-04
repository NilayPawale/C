#include<stdio.h>
int main()
{
	int a,b;
	char c;
	printf("Enter the Mathematical Operation\n");
	scanf("%c",&c);
	
	switch(c)
	{
		case '+':
			printf("Enter Number a\n");
			scanf("%d",&a);
			printf("Enter Number b\n");
			scanf("%d",&b);
			printf("%d is the Sum of Two Numbers\n",a+b);
			break;
		case '-':
			printf("Enter Number a\n");
			scanf("%d",&a);
			printf("Enter Number b\n");
			scanf("%d",&b);
			printf("%d is the Difference of Two Numbers\n",a-b);
			break;
		case '*':
			printf("Enter Number a\n");
			scanf("%d",&a);
			printf("Enter Number b\n");
			scanf("%d",&b);
			printf("%d is the Product of Two Numbers\n",a*b);
			break;
		case '/':
			printf("Enter Number a\n");
			scanf("%d",&a);
			printf("Enter Number b\n");
			scanf("%d",&b);
			printf("%d is the Division of Two Numbers\n",a/b);
			break;
		default:
			printf("Error\n");
			break;
	}
}  