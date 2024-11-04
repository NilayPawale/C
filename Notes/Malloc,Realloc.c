/*Malloc and Realloc
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *p,n,i,ch,n1,num;
	
	printf("Enter Number of int:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	
	printf("Enter %d number:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("Your Data is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
	printf("\n You Want to save more data than Press 1\n");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("Enter Number of int:\n");
		scanf("%d",&ch);
		p=(int*)realloc(p,(n1+n)*sizeof(int));
		printf("Enter %d numbers:\n",n1);
		num=n1+n;
		for(i=n;i<num;i++)
		{
			scanf("%d",(p+i));
		}
		printf("\n Your data:\n");
		for(i=0;i<n1+n;i++)
		{
			printf("%d\t",*(p+i));
		}
	}
}*/