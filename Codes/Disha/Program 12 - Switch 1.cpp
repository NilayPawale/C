#include <stdio.h>
int main()
{
	int a,b,c,ch;
	printf("Press 1 for addition\n Press 2 for Subtraction\n Press 3 for Multiplication\n Press 4 for Division\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			printf("Enter any two no.\n");
			scanf("%d %d",&a,&b);
			c=a+b;
			printf("%d+%d=%d",a,b,c);
			break;
			
		case 2:
			printf("Enter any two no.\n");
			scanf("%d %d",&a,&b);
			c=a-b;
			printf("%d-%d=%d",a,b,c);
			break;
			
		case 3:
			printf("Enter any two no.\n");
			scanf("%d %d",&a,&b);
			c=a*b;
			printf("%d*%d=%d",a,b,c);
			break;
			
		case 4:
			printf("Enter any two no.\n");
			scanf("%d %d",&a,&b);
			c=a/b;
			printf("%d/%d=%d",a,b,c);
			break;
			
		default:
			printf("Invalid Choice\n");
	}
}
