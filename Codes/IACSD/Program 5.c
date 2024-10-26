#include<stdio.h>
int main()
{
	char a;
	printf("Enter the Alphabet\n");
	scanf("%c",&a);
	
	if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
	{
		printf("The Alphabet is a Vowel\n");
	}
	else
	{
		printf("The Alphabet is a Consonant\n");
	}
} 