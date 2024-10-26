// Write a program to display number of days in the given month and year using  
// a. Using If else ladder. 
// b. Using logical operators.

#include<stdio.h>

int main()
{
    int year;
    int m;
    printf("Enter Year\n");
    scanf("%d",&year);

    if (year%400==0)
    {
        printf("Year has 366 Days\n");
    }
    else
    {
        if (year%4==0)
        {
            if (year%100!=0)
            {
                printf("Year has 366 Days\n");
            }
            else
            {
                printf("Year has 365 Days\n");
            }
        }
        else
        {
            printf("Year has 365 Days\n");
        }
    }
    
    int jan = 1, feb = 2, mar = 3, apr = 4, may = 5, june = 6, july = 7, aug = 8, sep = 9, oct = 10, nov = 11, dec = 12;
    printf("Enter Month\n");
    scanf("%d",&m);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        printf("This Month has 31 Days\n");
    }
    else if (m ==4 || m == 6 || m == 9 || m == 11)
    {
        printf("This Month has 30 Days\n");
    }
    else if (m == 2)
    {
          if (year%400==0)
    {
        printf("This Month has 29 Days\n");
    }
    else
    {
        if (year%4==0)
        {
            if (year%100!=0)
            {
                printf("This Month has 29 Days\n");
            }
            else
            {
                printf("This Month has 28 Days\n");
            }
        }
        else
        {
            printf("This Month has 28 Days\n");
        }
    }
    }   
}


/*//OR


#include<stdio.h>

int main()
{
    int year;
    int m;
    printf("Enter Year\n");
    scanf("%d",&year);

    if (year%400==0 || year%4==0 && year%100!=0)
    {
        printf("This Year has 366 Days\n");
    }
    else
    {
        printf("This Year has 365 Days\n");
    }
    
    int jan = 1, feb = 2, mar = 3, apr = 4, may = 5, june = 6, july = 7, aug = 8, sep = 9, oct = 10, nov = 11, dec = 12;
    printf("Enter Month\n");
    scanf("%d",&m);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        printf("This Month has 31 Days\n");
    }
    else if (m ==4 || m == 6 || m == 9 || m == 11)
    {
        printf("This Month has 30 Days\n");
    }
    else if (m == 2)
    {
        if (year%400==0 || year%4==0 && year%100!=0)
    {
        printf("This Month has 29 Days\n");
    }
    else
    {
        printf("This Month has 28 Days\n");
    }
    }   
}*/