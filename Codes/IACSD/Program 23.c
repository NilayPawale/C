//Write a program to accept a character, an integer n and display the next n characters. 
#include <stdio.h>
int main()
{
	char a;
	int i,n;
	printf("Enter the Character\n");
	scanf("%c",&a);
	printf("Enter the Number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=a+1;
		printf("%c\t",a);
	}
} 