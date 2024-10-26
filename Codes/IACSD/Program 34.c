//Accept marks of 5 subjects (out of 100) of a student and display total marks and compute the percentage also.
#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5;
	float t,p;
	printf("Enter Subject 1 Marks\n");
	scanf("%d",&s1);
	printf("Enter Subject 2 Marks\n");
	scanf("%d",&s2);
	printf("Enter Subject 3 Marks\n");
	scanf("%d",&s3);
	printf("Enter Subject 4 Marks\n");
	scanf("%d",&s4);
	printf("Enter Subject 5 Marks\n");
	scanf("%d",&s5);
	t=s1+s2+s3+s4+s5;
	p=(t/500)*100;
	printf("The Total is : %f\n",t);
	printf("The Percentage is : %f\n",p);
} 