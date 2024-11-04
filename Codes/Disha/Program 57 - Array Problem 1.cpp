//Array Problem 1 - Store number in array element
#include <stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int pos,data;
	printf("Enter the Position\n");
	scanf("%d",&pos);
	printf("Enter the Element\n");
	scanf("%d",&data);
	a[pos]=data;
	int i=0;
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
}
