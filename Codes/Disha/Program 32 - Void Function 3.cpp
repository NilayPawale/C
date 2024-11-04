#include <stdio.h>
void addition()
{
	printf("Enter the value to be added\n");
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	int c = a+b;
	printf("%d\n",c);
}

void subtraction()
{
	printf("Enter the value to be subtracted\n");
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	int d = a-b;
	printf("%d\n",d);
}

void multiplication()
{
	printf("Enter the value to be multiplied\n");
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	int e = a*b;
	printf("%d\n",e);
}

void division()
{
	printf("Enter the value to be divided\n");
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	int f = a/b;
	printf("%d\n",f);
}

int main()
{
	int j;
	printf("Press 1 for Addition\n Press 2 for Subtraction\n Press 3 for Multiplication\n Press 4 for Division\n");
	scanf("%d",&j);
	switch(j)
	{
		case 1:
			{
				addition();
				break;
			}
		case 2:
			{
				subtraction();
				break;
			}
		case 3:
			{
				multiplication();
				break;
			}
		case 4:
			{
				division();
				break;
			}
			default:
			{
				printf("Error");
			}
	}
}
