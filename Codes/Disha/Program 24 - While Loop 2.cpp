#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the Value of a and b\n");
	scanf("%d %d",&a,&b);
	int i=a;
	while (i<=b)
	{
		printf("Enter the Value of %d\n",i);
		i++;
	}
}
