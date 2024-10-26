#include <stdio.h>
int swap(int x, int y);
int main()
{
    char p1 = 255,p2=256;
    //printf("%d",p1);
    char p3 = (~p1++, ~p2--);
    printf("%d%d\n",p1,p2);
    printf("%d",p3);
} 
/*
{
    int a=1, b=10;
    printf("\n%d %d", a,b);
    swap(a,b);
    printf("\t%d %d", a,b);
    return 0;
}
int swap(int a, int b)
{
    int x=90, y=12;

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    return y;
} */