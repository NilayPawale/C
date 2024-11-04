#include<stdio.h>
int main()
{
	char a;
	printf("Enter the Alphabet\n");
	scanf("%c",&a);
	
	if((int)a>=97 && (int)a<=122)
	{
		printf("The Alphabet is Lower Case\n");
	}
	else if((int)a>=65 && (int)a<=90)
	{
		printf("The Alphabet is Upper Case\n");
	}
	else
	{
		printf("The Character is not a Alphabet\n");
	}
}