//Write a function to calculate factorial of a given number using recursion. 

#include<stdio.h>

int fact(int n)
{
    if (n==0)
        return 1;
        return n*fact(n-1);
}
int main()
{
    int n=5;
    int factorial=fact(n);
    printf("Factorial = %d\n",factorial);
}