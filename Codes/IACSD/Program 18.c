#include <stdio.h>
int main()
{
    int x,y,a,b,temp;
    float rem,quo;
    printf("Enter Number 1\n");
    scanf("%d",&x);
    printf("Enter Number 2\n");
    scanf("%d",&y);

    printf("Enter the Number for the Operation\n");
    printf("1.Equality Check\n 2.Less Than Check\n 3.Quotient and Remainder\n 4.Range between\n 5.Swap\n ",a);
    scanf("%d",&a);

    switch(a)
    {
        case 1:
            if(x==y)
            {
                printf("Two Numbers are Equal\n");
            }
            else
            {
                printf("Two Numbers are not Equal\n");
            }
            break;    

        case 2:
            if(x<y)
            {
                printf("X is Less Than Y\n");
            }
            else
            {
                printf("Y is Less Than X\n");
            }
            break;
            
        case 3:
            quo = x / y;
            rem = x % y;
            printf("%f is the Quotient and %f is the Remainder/n",quo,rem);
            break;
            
        case 4:
             printf("Enter Number \n");
             scanf("%d",&b);
             if(b>= x && b <= y)
             {
                printf("Number is between X and Y\n");
             }
             else
             {
                printf("Number is not between X and Y\n");
             }
             break;

        case 5:
            printf("Before Swap %d and %d\n",x,y);
            temp=x;
            x=y;
            y=temp;
            printf("After Swap %d and %d\n",x,y);
            break;
    }
}