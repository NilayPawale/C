//Write a program to accept number and check whether the number is +ve, -ve and zero.

#include<stdio.h>

int main()
{
    int a;
    printf("Enter Number \n");
    scanf("%d",&a);

    if(a>0)
    
        printf("%d is a Positive Number",a);
    
    else if(a==0)
    
        printf("%d is a Zero Number",a);
    
    else 
    
        printf("%d is a Negative Number",a);
      
}