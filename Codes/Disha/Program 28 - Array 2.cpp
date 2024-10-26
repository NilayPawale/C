#include <stdio.h>
int main()
{
	int a;
	int i=0;
	printf("Enter the Value for the size of array\n");
	scanf("%d",&a);
	printf("Enter the Values\n");
	int arr[a];
	for(i=0;i<a;i++)  //for taking values
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++) //for printing values
	{
		printf("%d",arr[i]);
	}
}
