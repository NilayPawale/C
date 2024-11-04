#include<stdio.h>
int main ()
{
	int a;
	scanf ("%d",&a);
	if (a>=95)
	{
		printf ("The Number is First Class");
	}
	
	else if (a>=50)
	{
		printf ("The Number is Second Class");
	}

    else if (a>=35)
	{
		printf ("The Number is Third Class");
	}
	
	else
	{
		printf ("The Number is Fail");
	}
}
