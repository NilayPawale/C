// Write a function to calculate factorial of a given number.

#include<stdio.h>
void display_number(int n);
int accept_number(void);

int main()
{
    int num1;
    num1 = accept_number();
    display_number(num1);
}


int accept_number()
{
    int n;
    printf("Enter Number\n");
    scanf("%d",&n);
    return n;
}

void display_number(int n)
{
    int fact=1,i;
    for (i = 1; i <=n; i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d\n",n,fact);
}