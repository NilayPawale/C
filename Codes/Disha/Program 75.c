#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter value of a and b");
    scanf("%d %d",&a,&b);
    int i=a;
    while (i<=b)
    {
        if (i%2==0)
        {
            printf("%d is Even\n",i);
        }
        
        else
        {
            printf("%d is Odd\n",i);
        }
        i++;
    }
}