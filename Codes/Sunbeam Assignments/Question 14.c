//Input a number and display whether number is Even or Odd.

#include<stdio.h>

int main()
{
    int a;
    printf("Enter Number a\n");
    scanf("%d",&a);

    if (a %2 ==0)
    {
        printf("%d is Even Number",a);
    }
    else
    {
        printf("%d is Odd Number",a);
    }
    
}