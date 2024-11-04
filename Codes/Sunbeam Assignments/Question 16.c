// Write a program to find maximum of two numbers using  
// a. If – else 
// b. conditional operator. 

#include<stdio.h>

int main()
{
    int a;
    int b;
    printf("Enter Number a\n");
    scanf("%d",&a);
    printf("Enter Number b\n");
    scanf("%d",&b);

    if (a<b)
    {
        printf("B is Greater then A");
    }
    else
    {
        printf("A is Greater then B");   
    }
    
}