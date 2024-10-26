#include<stdio.h>

int main()
{
    int a,b,s,e,j;
    printf("Enter value of a and b");
    scanf("%d %d",&a,&b);
    int i=a;
    while (i<=b)
    {
        if (i%2==0)
        {
            printf("%d is Even\n",i);
        }
        i++;
    }
    printf("Enter START and END Again.");
    scanf("%d%d",&s,&e);
    j=s;
    while (j<=e)
    {
        if (j%2!=0)
        {
            printf("%d is Odd\n",j);
        }
        j++;
    }
}