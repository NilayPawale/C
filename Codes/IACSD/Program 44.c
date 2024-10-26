/* Write a program to accept, display and print the sum of elements of each row and sum of elements of 
each column of a matrix. */
#include <stdio.h>
int main()
{
	int i,j;
	int arr1[2][2];
	int arr2[2][2];
	int arr3[2][2];
    printf("Enter Array Elements\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",arr1[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",arr2[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			arr3[i][j]=arr1[i][j]+arr2[i][j];
			printf("%d ",arr3[i][j]);
		}
		printf("\n");
	}
}
