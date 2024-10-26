//For Loop Factorial Assignment
#include <stdio.h>
int main()
{
	int i,number,fact=1;
	printf("Enter any number\n");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++)
	{
		fact = fact*i;
	}
	printf("Factorial is %d : %d",number,fact);
}
