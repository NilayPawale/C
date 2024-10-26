#include<stdio.h>

int main()
{
char*s="Sunbeam"; int i; char*p=s;
for (i=0; i <strlen(p); i++, p++)
    printf("%c",*p++);
return 0;
}