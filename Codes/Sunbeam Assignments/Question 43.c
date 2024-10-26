//String Size

#include<stdio.h>
#include<string.h>

int main()
{
    char ch1[20];
    char ch2[20];
    int result;

    printf("Enter String 1 Elements\n");
    fgets(ch1,sizeof(ch1),stdin);

    printf("Enter String 2 Elements\n");
    fgets(ch2,sizeof(ch2),stdin);

    result = strcat(ch1,ch2);   
    printf("Added String is = %s",result);
}