//Write a program to find factorial of given number

#include<stdio.h>

int main()
{    
    int i,num,f,fact=1;
    printf("Enter Number\n");
    scanf("%d",&num);

    while (i<=num)
    {
        f = fact*i;
        i++;
    }
    
}