#include <stdio.h>
int main()
{
	int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    
    if(a>b && a>c)
    {
    	printf("The value of a is Bigger");
    }
    else if(b>a && b>c)
    {
	    printf("The value of b is Bigger");
    }
    else
    {
    	printf("The value of c is Bigger");
	}
}
