#include <stdio.h>
int num;
int function(int n)
{
    int num = 9;
    return num;
}
int main(void)
{
    int d;
    printf("%d %d\n", &num, function(d));
    return 0;
}