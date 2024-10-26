// Write a program to print table of given number.

#include<stdio.h>

int main()
{
    int i=1,num;
    printf("Enter Number\n");
    scanf("%d",&num);

    while (i<=10)
    {
        printf("%d * %d = %d\n",num,i,num*i);
        i++;
    }
}

