// Write a function to implement four function calculator. The return value indicates the error (due 
// to zero denominator in case of division). The result is returned via out-parameter.

#include<stdio.h>

int main()
{
    int num1,num2,res;
    printf("Enter Number 1\n");
    scanf("%d",&num1);
    printf("Enter Number 2\n");
    scanf("%d",&num2);

    calculator(num1,num2,&res);
    printf("Result from %d and %d is %d\n",num1,num2,res);   
    
}
void calculator(int n1,int n2,int*r)
{
    int num;
    printf("Enter Number for Operation\n 1 for Addition\n 2 for Subtraction\n 3 for Multiplication\n 4 for Division\n");
    scanf("%d",&num);

switch(num)
{
    case 1:
        *r=n1+n2;
        printf("Sum of %d and %d\n",n1,n2);
        return r;
        break;
    case 2:
        *r=n1-n2;
        printf("Difference of %d and %d\n",n1,n2);
        return r;
        break;
    case 3:
        *r=n1*n2;
        printf("Prod of %d and %d\n",n1,n2);
        return r;
        break;
    case 4:
        *r=n1/n2;
        if(n2==0)
        {
            printf("Error\n");
            break;
        }
        else
        {
            printf("Division of %d and %d\n",n1,n2);
            return r;
            break;
        }
        
}
}

//OR


/*#include<stdio.h>

int main()
{
    int num1,num2,sum,diff,prod,div;
    printf("Enter Number 1\n");
    scanf("%d",&num1);
    printf("Enter Number 2\n");
    scanf("%d",&num2);

    calculator(num1,num2,&sum,&diff,&prod,&div);
    printf("Sum of %d and %d is = %d\n\n",num1,num2,sum);
    printf("Difference of %d and %d is = %d\n\n",num1,num2,diff);
    printf("Prod of %d and %d is = %d\n\n",num1,num2,prod);
    printf("Division of %d and %d is = %d\n\n",num1,num2,div);
}
void calculator(int n1,int n2,int*s,int*d,int*p,int*i)
{

    *s=n1+n2;
    *d=n1-n2;
    *p=n1*n2;
    *i=n1/n2;
}*/

