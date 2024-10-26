#include<stdio.h>
int main()
{
	char a;
	printf("Enter the Alphabet\n");
	scanf("%c",&a);
	
	if(a>='a' && a<='z')
	{
		printf("The Alphabet is Lower Case\n");
	}
	else if(a>='A' && a<='Z')
	{
		printf("The Alphabet is Upper Case\n");
	}
	else
	{
		printf("The Character is not a Alphabet\n");
	}
}