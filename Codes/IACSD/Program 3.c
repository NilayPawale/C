//Write a program, which accepts annual basic salary of an employee and calculates and displays the 
// Income tax as per the following rules.  
// Basic: < 1, 50,000 Tax = 0  
//            1, 50,000 to 3,00,000 Tax = 20%  
//            > 3,00,000 Tax = 30% 
#include <stdio.h>
int main()
{
	float a,tax;
	printf("Enter the Annual Salary\n");
	scanf("%f",&a);
	if(a==150000)
	{
		printf("Tax is 0 on Annual Salary of %f\n",a);
		tax = 0;
	}
	else if(a<150000 && a>300000)
	{
		printf("Tax is 20 on Annual Salary of %f\n",a);
		tax = a * 0.2;
	}
	else if(a>=300000)
	{
		printf("Tax is 30 on Annual Salary of %f\n",a);
		tax = a * 0.2;
	}
	printf("Income tax for basic salary of %f is %f\n",a,tax);
} 