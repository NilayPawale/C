#include<stdio.h>

int powerr(int b,int p)
{
    if (p==0)
        return 1;
        return b*powerr(b,p-1);
   
}
int main()
{
    int b;
    printf("Enter the Base\n");
    scanf("%d",&b);

    int p;
    printf("Enter the Power\n");
    scanf("%d",&p);

    int power=powerr(b,p);
    printf("Power is = %d\n",powerr);

}