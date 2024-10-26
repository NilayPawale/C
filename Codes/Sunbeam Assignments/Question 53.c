#include <stdio.h>
int value = 0;
int function(void)
{
    int value = 1;
    printf("%d ", value);
    {
        int value = 2;
        printf("%d ", value);
        {
        value += 1;
        printf("%d ", value);
        }
        printf("%d ", value);
    }
    printf("%d ", value);
    return 0;
}
int main(void)
{
    function();
    return 0;
}