#include <stdio.h>
int main()
{
	int i;
	int number;
	scanf("%d",&number);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",number,i,number*i);
		//number=number*i;
	}
}
