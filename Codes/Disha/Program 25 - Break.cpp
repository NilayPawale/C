#include <stdio.h>
int main()
{
	int i;
	for(i=0;i<=10;i++)
	{
		if(i==5)
		{
			break;
		}
		else
		{
			printf("The i value is %d\n",i);
		}
	}
}
