//Write a program to accept two numbers and display division of the two numbers. Check for 
//divide by zero error. If divider is zero then display appropriate error message.

#include<stdio.h>

int main()
{
    int a,b,c,ans;
    printf("Enter Number a\n");
    scanf("%d",&a);
    printf("Enter Number b\n");
    scanf("%d",&b);
    ans=a/b;

    if(ans==0)
    {
        printf("%d is the Value Equal to Zero",ans);
    }
    else
    {
        printf("%d is the Value Not Equal to Zero",ans);
    }
}

//OR

// #include<stdio.h>

// int main()
// {
//     int a,b,c,ans;
//     printf("Enter Number a\n");
//     scanf("%d",&a);
//     printf("Enter Number b\n");
//     scanf("%d",&b);

//     if(b==0)
//     {
//         printf("Value Not Equal to Zero");
//     }
//     else
//     {
        
//         printf(" is the Value Equal to Zero\n");
//         ans=a/b;
//     }
//     printf("%d",ans);
// }