//Write a program to print table of given number

#include<stdio.h>

int main()
{
    int i,num;
    printf("Enter Number\n");
    scanf("%d",&num);

    for (i = 1; i <= 20; i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
    
}

