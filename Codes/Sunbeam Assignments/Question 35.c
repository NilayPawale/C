//Write a function to calculate power using recursion. 

#include<stdio.h>

int result(int b,int p)
{
    if (p==0)
    return 1;
    return (b)*result(b,p-1);
}
int main()
{
    int power;
    int b;
    printf("Enter the Base\n");
    scanf("%d,",&b);

    int p;
    printf("Enter the Power\n");
    scanf("%d,",&p);

    power=result(b,p);
    printf("%d to the Base of Power of %d is = %d\n",b,p,power);

}