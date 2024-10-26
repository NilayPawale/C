#include<stdio.h>
int my = 0;
int myset(int my)
{
    printf("%d ", my++);
    return my = my <= 2 ? 5 : 0;
}
int main()
{
    int my = 5;
    myset( my/2 ); 
    printf("%d ", my);
    myset( my=my/2 ); 
    printf("%d ", my);
    my = myset( my/2 ); 
    printf("%d ", my);
    return 0;
}