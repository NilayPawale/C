#include<stdio.h>
int main()
{
	int a;
	printf("Enter the Number to be in Words\n");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
			printf("ONE\n");
			break;
		case 2:
			printf("TWO\n");
			break;
		case 3:
			printf("THREE\n");
			break;
		case 4:
			printf("FOUR\n");
			break;
		case 5:
			printf("FIVE\n");
			break;
		case 6:
			printf("SIX\n");
			break;
		case 7:
			printf("SEVEN\n");
			break;
		case 8:
			printf("EIGHT\n");
			break;
		case 9:
			printf("NINE\n");
			break;
		case 10:
			printf("TEN\n");
			break;
		default:
			printf("ERROR\n");
			break;
	}
} 