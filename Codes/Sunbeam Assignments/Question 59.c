#include <stdio.h>
int* fun1(int value)
{
    static int a=10;           
    value++; value=a; a++;
    return &a;
}
int main( void )
{
    int a=10;
    int * const val=fun1(a);
    printf(" value= %d", *val);
    return 0;
}