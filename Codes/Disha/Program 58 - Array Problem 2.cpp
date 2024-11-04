//Array Problem 2 - To check repeated values in Array
#include <stdio.h>
int main()
{
	int a[5]={1,1,2,3,4};
	int i=0,temp=0;
	for(i=0;i<5;i++)
	{
		if(a[i]==a[i+1])
		{
			printf("The Value is Found\n");
			temp=1;  //Or temp++
			break;
		}
	}
	if(temp==0)
	{
		printf("The Value is not Found\n");
	}
}
