#include <stdio.h>
int main()
{
	int a;
	int i=0;
	printf("Enter the Value for array\n");
	scanf("%d",&a);
	int sum=0;
	printf("Enter the Values\n");
	int arr[a];
	for(i=0;i<a;i++)  
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++) 
	{
		printf("%d\n",arr[i]);
	}
	for(i=0;i<a;i++) 
	{
		sum+=arr[i];
	}
	printf("The Total Number of Array=%d\n",sum);
}
