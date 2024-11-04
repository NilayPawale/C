#include <stdio.h>
int main()
{
	char a;
	char b;
	char c;
	char d;
	char e;
	printf("Enter the Character\n");
	scanf("%c %c %c %c %c",&a,&b,&c,&d,&e);
	
	if(a=='a'||b=='e'||c=='i'||d=='o'||e=='u')
	{
		if(a=='a'||a=='A')
		{
			printf("It is a Vowel");
		}
		else if(b=='e'||b=='E')
		{
			printf("It is a Vowel");
		}
		else if(c=='i'||c=='I')
		{
			printf("It is a Vowel");
		}
		else if(d=='o'||d=='O')
		{
			printf("It is a Vowel");
		}
		else if(e=='u'||e=='U')
		{
			printf("It is a Vowel");
		}
	}
	else
	{
		printf("It is not a Vowel");
	}
}
