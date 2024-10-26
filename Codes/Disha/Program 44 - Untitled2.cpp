#include <stdio.h>
struct student
{
	int rollno;
	char name[20];
	float per;
};
int main()
{
	struct student s1;
	printf("Enter the RollNo, Name, Per\n");
	scanf("%d %s %f",&s1.rollno,&s1.name,&s1.per);
	
	printf("RollNo\t\t, Name\t\t, Percentage\n");
	
	printf("%d\t\t %s\t\t %f\n",&s1.rollno,&s1.name,&s1.per);
}
