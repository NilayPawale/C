// Write a program to determine the ranges of char, short, int, and long variables, both signed and 
// unsigned, by printing appropriate values from standard headers.


#include<stdio.h>
#include<limits.h>

int main()
{
    printf("Data Type\t\t Size\t\t Format Specifiers\t\t Range\t\t\n");
    char ch;
    //printf("size=%u\t\t ch=%d\t\t ch=%ld\t\t %dto%d\t\t",sizeof(ch),SCHAR_MIN,SCHAR_MAX);
    printf("char\t\t\t size=%d\t\t\t %%c\t\t\t %d to %d\t\t\t\n",sizeof(ch),SCHAR_MIN,SCHAR_MAX);

    unsigned char ch1;
    printf("unsigned char\t\t size=%d\t\t\t %%c\t\t\t %d to %d\t\t\n",sizeof(ch1),NULL,UCHAR_MAX);
    
    short int num1;
    printf("short int\t\t size=%d\t\t\t %%hd\t\t\t %d to %d\t\t\n",sizeof(num1),SHRT_MIN,SHRT_MAX);

    unsigned short int num2;
    printf("unsigned short int\t size=%d\t\t\t %%hu\t\t\t %d to %d\t\t\n",sizeof(num2),NULL,USHRT_MAX);

    int num3;
    printf("int\t\t\t size=%d\t\t\t %%d\t\t\t %d to %d\t\t\t\n",sizeof(num3),SHRT_MIN,SHRT_MAX);//W

    unsigned int num4;
    printf("unsigned int\t\t size=%d\t\t\t %%u\t\t\t %d to %d\t\t\n",sizeof(num4),NULL,USHRT_MAX);//W

    long int num5;
    printf("long int\t\t size=%d\t\t\t %%ld\t\t\t %d to %d\t\t\t\n",sizeof(num5),LONG_MIN,LONG_MAX);

    unsigned long int num6;
    printf("unsigned long int\t size=%d\t\t\t %%lu\t\t\t %d to %d\t\t\n",sizeof(num6),NULL,ULONG_MAX);//W

}