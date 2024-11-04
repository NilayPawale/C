#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter value of a and b");
    scanf("%d %d",&a,&b);
    int i=a;
    do{
        printf("%d",i);
        i++;
    } while (i<=b);
}