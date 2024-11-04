#include <stdio.h>
int demo(char p1, char p2)
{
    char p3;
    p3 = ~p1 + ~p2;
    printf("%d\t%d\t%d\t",p1,p2,p3);
    return p3;
}
int main(void)
{
    char p1 = 1, p2 = 0;
    char p3 = demo(~p1++, ~p2--);
    printf("%d %d %d\n", p1, p2, p3);
    return 0;
}