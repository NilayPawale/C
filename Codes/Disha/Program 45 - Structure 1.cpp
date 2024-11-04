#include <stdio.h>
struct student
{
	int rollno;
	char name[20];
	float per;
};
int main()
{
	struct student s1,s2,s3;
	printf("Enter the RollNo, Name, Per\n");
	scanf("%d %s %f",&s1.rollno,&s1.name,&s1.per);
	
	printf("Enter the RollNo, Name, Per\n");
	scanf("%d %s %f",&s2.rollno,&s2.name,&s2.per);
	
	printf("Enter the RollNo, Name, Per\n");
	scanf("%d %s %f",&s3.rollno,&s3.name,&s3.per);
	
	printf("RollNo\t\t Name\t\t Percentage\n");
	
	printf("%d\t\t %s\t\t %f\n",s1.rollno,s1.name,s1.per);
	
	printf("%d\t\t %s\t\t %f\n",s2.rollno,s2.name,s2.per);
	
	printf("%d\t\t %s\t\t %f\n",s3.rollno,s3.name,s3.per);
}
