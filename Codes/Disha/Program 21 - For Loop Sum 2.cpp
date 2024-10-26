#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a and b\n");
	scanf("%d %d",&a,&b);
	int sum=0;
	int i;
	for(i=a;i<=b;i++)
	{
		sum +=i;
	}
	printf("%d",sum);
}
