// Write a function to calculate sum and product into a single function. 
// a. Using global variables (for result) 
// b. Without using global variables 

#include<stdio.h>
//a.
int sum,prod;
int main()
{   
    int num1, num2;
    printf("Enter Number 1\n");
    scanf("%d",&num1);
    printf("Enter Number 2\n");
    scanf("%d",&num2);

    sumpro(num1,num2);
    printf("Sum of %d and %d is = %d\n",num1,num2,sum);
    printf("Prod of %d and %d is = %d\n",num1,num2,prod);
}
void sumpro(int n1,int n2)
{
    sum=n1+n2;
    prod=n2*n2;
}

/*//b.

int main()
{
    int num1,num2,sum,prod;
    printf("Enter Number 1\n");
    scanf("%d",&num1);
    printf("Enter Number 2\n");
    scanf("%d",&num2);

    sumpro(num1,num2,&sum,&prod);
    printf("Sum of %d and %d is = %d\n",num1,num2,sum);
    printf("Prod of %d and %d is = %d\n",num1,num2,prod);
}
void sumpro(int n1,int n2,int*s,int*p)
{
    *s=n1+n2;
    *p=n1*n2;
}*/
