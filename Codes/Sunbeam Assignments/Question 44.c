//Add String

#include<stdio.h>
#include<string.h>

int main()
{
    char ch1[20];
    char ch2[20];
   

    printf("Enter String 1 Elements\n");
    gets(ch1);

    printf("Enter String 2 Elements\n");
    gets(ch2);

    strcat(ch1,ch2);
    printf("Added String is %s",ch1);
}