#include <stdio.h>
int main()
{
	int a[2],b[2],c[2];
	int i=0;
	printf("Enter 1st 1D Array Element\n");
	for (i=0;i<2;i++)
	{
		scanf("%d\n",&a[i]);
	}
	printf("Enter 2nd 1D Array Element\n");
	for (i=0;i<2;i++)
	{
		scanf("%d\n",&b[i]);
	}
	int j;
	for (j=0;j<2;j++)
	{
		c[j]=a[j]+b[j];
	}
	printf("Addition is 2D Array\n");
	for (j=0;j<2;j++)
	{
		printf("%d\t",c[j]);
	}
}
