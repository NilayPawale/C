#include<stdio.h>

struct s1
{
    struct{int x;
    struct s{int x;}
    s2;
    struct s*s;}s3;
}y={10};
int main()
{
    y.s3.s=&y.s3.s2;
    printf("%d",y.s3.s->x);
    return 0;
}