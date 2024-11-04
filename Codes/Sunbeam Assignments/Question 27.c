// Write a program to accept a character and a number, and print the character number times

#include<stdio.h>

int main()
{
    char ch;
    int num,i=0;

    printf("Enter Character\n");
    scanf("%c",&ch);
    printf("Enter Number\n");
    scanf("%d",&num);
    
    while (i<=num)
    {
        printf("%c",ch);
        i++;
    }   
}