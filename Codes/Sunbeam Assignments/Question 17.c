// Write a program to find maximum of three numbers using 
// a. If – else 
// b. conditional operator. 

#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("Enter Number a\n");
    scanf("%d",&a);
    printf("Enter Number b\n");
    scanf("%d",&b);
    printf("Enter Number c\n");
    scanf("%d",&c);

    if (a>b && a>c)
    {
        printf("%d is the Greatest Number",a);
    }
    else if (b>a && b>c)
    {
        printf("%d is the Greatest Number",b);
    }
    else 
    {
        printf("%d is the Greatest Number",c);
    }
    
    //OR 
    
    //else if (c>a && c>b)
    //{
    //    printf("%d is the Greatest Number",c);
    //}
}