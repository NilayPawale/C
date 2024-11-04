// Accept the basic salary of an employee and compute the net salary after adding earnings and subtracting 
// deductions. 
//     PF is 2 % of basic 
//     Tax is 3 % of basic 
//     HRA is 5 % basic 
//     DA is 8 % of basic
#include <stdio.h>
int main()
{
	float salary;
	float net_salary,gross_salary,pf,tax,hra,da;
	
	printf("Enter the Salary\n");
	scanf("%f",&salary);
	printf("The Salary is %f\n",salary);
	
	pf=salary*2/100;
	printf("The Provident Fund is %f\n",pf);
	
	tax=salary*3/100;
	printf("The Tax is %f\n",tax);
	
	hra=salary*5/100;
	printf("The HRA is %f\n",hra);
	
	da=salary*8/100;
	printf("The DA is %f\n",da);
	
	gross_salary=salary+hra+da;
	printf("The Gross Salary is %f\n",gross_salary);
	
	net_salary=gross_salary-tax-pf;
	
	printf("The Net Salary is %f\n",net_salary);
} 