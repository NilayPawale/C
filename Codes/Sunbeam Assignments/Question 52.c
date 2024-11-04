#include <stdio.h>
int my = 0;
int myset(int my)
{
    printf("%d ", my++);
    my = my <= 2 ? 5 : 0;
    printf("%d\n",my);
   return my;
}
int main(void)
{
    int my = 5;

    myset( my/2 ); 
    printf("%d\n ", my);

    myset( my=my/2 ); 
    printf("%d\n ", my);

    my = myset( my/2 ); 
    printf("%d\n ", my);

    return 0;
}