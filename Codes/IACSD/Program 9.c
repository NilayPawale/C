#include <stdio.h>
int main()
{
	int a;
	printf("Enter a Alphabet\n");
	scanf("%c",&a);
	
	if(a>='a' && a<='z')
	{
		printf("%c is a Lower Case Alphabet\n",a);
		a=a-32;
	}
	else if(a>='A' && a<='Z')
	{
		printf("%c is a Upper Case Alphabet\n",a);
		a=a+32;
	}
	else
	{
		printf("Invalid Alphabet\n");
	}
	printf("%c is the invereted Case of the Alphabet\n",a);
}