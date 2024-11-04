#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter value of a and b");
    scanf("%d %d",&a,&b);
    int i=a;
    while (i<=b)
    {
        printf("Enter the Value of %d\n",i);
        i++;

    }
    
}