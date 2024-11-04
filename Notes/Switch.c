//Program 12 - Switch 1
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

/*Program 13 - Switch 2
#include <stdio.h>
int main()
{
	int a;
	printf("Press 1 for Sunday\n Press 2 for Monday\n Press 3 for Tuesday\n Press 4 for Wednesday\n Press 5 for Thursday\n Press 6 for Friday\n Press 7 for Saturday\n");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
			printf("Sunday",a);
			break;
			
		case 2:
			printf("Monday",a);
			break;
			
		case 3:
			printf("Tuesday",a);
			break;
			
		case 4:
			printf("Wednesday",a);
			break;
			
		case 5:
			printf("Thursday",a);
			break;
			
		case 6:
			printf("Friday",a);
			break;
			
		case 7:
			printf("Saturday",a);
			break;
			
		default:
			printf("Error\n");
	}
}*/