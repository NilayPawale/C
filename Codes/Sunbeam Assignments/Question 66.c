#include<stdio.h>
int function(int,int);
int main(void)
{
    int i=10,j=20;
    int a;
    printf("before fun call :: i=%d j=%d \n",i,j);
    i=i+j;j=i-j;i=i-j;

    //function(i,j);
    j=function(i,j);
    i=i+j;j=i-j;i=i-j; 
    printf("%d=a\n",j);
    printf(" after fun call :: i=%d j=%d \n",i,j);

    return 0;
}
int function(int i,int j)
{
    i=i+j;j=i-j;i=i-j;
    return ++i, ++j;
}

/* int main()
{
    char ch=1;
    while(ch)
    {
        printf("%c %d\n",ch,ch);
        ch++;
    }
} */
