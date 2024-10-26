//Write a program to accept marks of five subjects, calculate its total and average.

#include<stdio.h>

int main()
{
    int i=0,sum=0,avarge;

    printf("Enter the Marks\n");
    int marks[5];
	for(i=0;i<5;i++)  //for taking values
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<5;i++) //for printing values
	{
		printf("%d",marks[i]);
	}
    for(i=0;i<5;i++) 
	{
		sum+=marks[i];
		avarge=sum/5;
	}
	printf("\nThe Total Number of Marks = %d\n",sum);
	printf("\nThe Avarge of Marks = %d\n",avarge);
}