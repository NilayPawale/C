//Write a function to calculate power. 

#include<stdio.h>
int accept_number1(void);
int accept_number2(void);
void display_number(int m,int n);

int main()
{
    int num1,num2;

    num1 = accept_number1();
    num2 = accept_number2();

    display_number(num1,num2);
}

int accept_number1()
{
    int n;
    printf("Enter Base Number\n");
    scanf("%d",&n);
    printf("%d is Base Number\n",n);
    return n;
}
int accept_number2()
{
    int m;
    printf("Enter Power Number\n");
    scanf("%d",&m);
    return m;
}

void display_number(int n,int m)
{
    int i,prod=2;
    for (i = 1; i<m; i++)//OR for (i = 1; i<=index; i++)
    {
        prod = prod*n;           
    }
    printf("%d is Output of %d is Base with %d Index\n",prod,n,m);
}
