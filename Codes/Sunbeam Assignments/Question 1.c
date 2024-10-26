// Write a program to Accept two numbers and 
// a. find its sum.
// b. find its difference. 
// c. find its product. 

//To Run Code in VS Code
//gcc 1a.c
//./a.exe 


#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter Number 1 \n");
    scanf("%d",&a);

    printf("Enter Number 2 \n");
    scanf("%d",&b);

    printf("The Sum of Two Numbers is %d",a+b);
    printf("The Difference of Two Numbers is %d",a-b);
    printf("The Product of Two Numbers is %d",a*b);
}

