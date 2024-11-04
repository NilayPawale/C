// Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If 
// reversed number is same as entered number it is called palindrome).

#include<stdio.h>

int main()
{
    int num = 12121;
    int num1=num;
    int rem,rev;
    
    rem=num1%10;
    rev=rev*10+rem;
    num1=num/10;
    
    rem=num1%10;
    rev=rev*10+rem;
    num1=num/10;

    rem=num1%10;
    rev=rev*10+rem;
    num1=num/10;

    rem=num1%10;
    rev=rev*10+rem;
    num1=num/10;

    rem=num1%10;
    rev=rev*10+rem;
    num1=num/10;

    if (num1==rev)
    {
        printf("Number is Palindrome");
    }
    else
    {
        printf("Number is not Palindrome");
    }
    
    
}

//OR

/*#include<stdio.h>

int main()
{
    int num = 121;
    int num1=num;
    int rem,rev;
    
    rem=num1%10;
    rev=rev*10+rem;
    num1=num/10;

    rem=num1%10;
    rev=rev*10+rem;
    num1=num/10;
    
    rem=num1%10;
    rev=rev*10+rem;
    num1=num/10;

    printf("%d",rem);
    
    if (num1==rev)
    {
        printf("Number is Palindrome");
    }
    else
    {
        printf("Number is not Palindrome");
    }

}*/