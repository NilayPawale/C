#include <stdio.h>
float calculate(float * const ptr_floater1,float const * ptr_floater2)
{
    float result;
    *ptr_floater1 = 2**ptr_floater1;
    result = 3 * (*ptr_floater2 - *ptr_floater1);
    return result, result+1, result/3;
}
int main(void)
{
    float floater1 = 0.001, floater2= 0.003;
    printf("%.3f",3*calculate(&floater1,&floater2)/3);
    printf("\n%f %u\n",calculate(&floater1,&floater2));
    return 0;
} 