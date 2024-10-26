#include<stdio.h>
int f(int n)
{
    static int i = 1;
    if (n >= 10)
        return n;
    n = n+i;
    i++;
    return f(n);
}
int main(void)
{
    int y=f(1);
    printf("%d",y);
    return 0;
} 