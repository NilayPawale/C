#include <stdio.h>
int main(void)
{
   int var=0,j;
    for(j=0;j<=5;j+=2)
    switch(j) 
    {
    case 1: var--; 
    break;
    case 2: 
    var+=2;
    case 4: 
    var%=2;
    j=-1;
    continue;
    default:
    --var;
    continue;
}
printf("%d",var);
    return 0;
}