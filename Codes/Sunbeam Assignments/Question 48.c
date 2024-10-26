#include<stdio.h>

struct student
{
    char *name[2];
    int s;
    char b;
};s={"Sun","Beam",0,1};

int main()
{
    printf("%d",sizeof(s));
    return 0;
}