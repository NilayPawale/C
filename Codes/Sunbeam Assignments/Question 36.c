//Write a function to calculate GCD of given numbers using recursion.

#include<stdio.h>

int result(int n1,int n2)
{ 
    if(n2!=0)
        return result(n2,n1%n2);

    //if(n1%n2==0){
        //return n2;
    //}
    //return gcdd(n2,n1%n2);
}

int main()
{
    int n1;
    printf("Enter the Number 1\n");
    scanf("%d",&n1);

    int n2;
    printf("Enter the Number 2\n");
    scanf("%d",&n2);

    int gcd=result(n1,n2);
    printf("Greatest Common Divisor (GCD) of %d and %d is = %d\n",n1,n2,gcd);
}