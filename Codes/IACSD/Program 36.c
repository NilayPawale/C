// Accept two numbers and swap two numbers using  
// i) Third variable 
// ii) By performing arithmetic operations.
#include <stdio.h>
int main()
{
	int a,b,swap;
	
	printf("Enter Number a\n");
	scanf("%d",&a);
	printf("Enter Number b\n");
	scanf("%d",&b);
	
	printf("\nSwapping by using Third Variable\n");
	printf("Before Swapping a=%d b=%d\n",a,b);
	swap=a;
	a=b;
	b=swap;
	printf("After Swapping a=%d b=%d\n\n",a,b);
	
	
	printf("By using Arithmetic Operators\n");
	printf("Before Swapping a=%d b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After Swapping a=%d b=%d\n",a,b);
	
} 