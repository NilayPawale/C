// Write a program to accept a number and
// a. Calculate sum of digits of integer
// b. Reverse the number
// c. Checkwhether given number is numeric palindrome or not
// d. Check whether it is Armstrong no. (when sum of cube of all digits of equals the number
// then the number is called as Armstrong number)

#include<stdio.h>

typedef enum {EXIT,SUMOFDIGITS,REVERSE,PALINDROME,ARMSTRONG}MENU;

int main()
{
    int sum,a,b,c,d;
    MENU mchoice;
    do
    {
        printf("0.EXIT\n");
        printf("1.Calculate Sum of Digits\n");
        printf("2.Find Reverse Number\n");
        printf("3.Conclude Palindrome Y/N\n");
        printf("4.Conclude Armstrong\n");
        scanf("%d",&mchoice);

        switch (mchoice)
        {
        case SUMOFDIGITS:
            
        
            printf("Enter 4 Digit Number\n");
            scanf("%d%d%d%d",&a,&b,&c,&d);

            sum=a+b+c+d;
            printf("%d is the Sum of Four Numbers\n",sum);
            
            break;
        
        case REVERSE:
            
            printf("Enter 4 Digit Number\n");
            scanf("%d%d%d%d",&a,&b,&c,&d);

            printf("%d%d%d%d",d,c,b,a);
            break;

        default:
            break;
        }
    } while (mchoice!=EXIT);
    

}