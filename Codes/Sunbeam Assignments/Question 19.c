// Write a program to display number of days in the given year. Check condition for leap year.  A 
// year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap 
// years. 
// a. Without using logical operators 
// b. Using logical operators 
// c. Conditional operator

#include<stdio.h>

//a
int main()
{
    int year;
    printf("Enter Year\n");
    scanf("%d",&year);

    if (year%400==0)
    {
        printf("Year is Leap Year\n");
    }
    else
    {
        if (year%4==0)
        {
            if (year%100!=0)
            {
                printf("Year is Leap Year\n");
            }
            else
            {
                printf("Year is not Leap Year\n");
            }
        }
        else
        {
            printf("Year is not Leap Year\n");
        }
    }
    
}

/*//b.
#include<stdio.h>

int main()
{
    int year;
    printf("Enter Year\n");
    scanf("%d",&year);

    if (year%400==0 || year%4==0 && year%100!=0)
    {
        printf("Year is Leap Year\n");
    }
    else
    {
        printf("Year is not Leap Year\n");
    }
    
}*/


/*//c.
#include<stdio.h>

int main()
{
    int year,is_leap=0;
    printf("Enter Year\n");
    scanf("%d",&year);

    is_leap = year%400==0 ? 1:(year%4==0 ? (year%100!=0 ? 1:0) : 0);

    if (is_leap==1)
    {
        printf("Year is Leap Year\n");
    }
    else
    {
        printf("Year is not Leap Year\n");
    }
    
}*/