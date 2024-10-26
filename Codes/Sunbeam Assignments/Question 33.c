//Write a function to implement four function calculator. Function would take operands and 
//operator as arguments and returns result. 


#include<stdio.h>
int accept_number1(void);
int accept_number2(void);
int display_number(int m,int n);


int main()
{
    int num1,num2,answer;

    num1 = accept_number1();
    num2 = accept_number2();

    display_number(num1,num2);
    answer = display_number;
    printf("%d is the Answer\n",answer);
}
int accept_number1()
{
    int n;
    printf("Enter Number 1\n");
    scanf("%d",&n);
    return n;
}
int accept_number2()
{
    int m;
    printf("Enter Number 2\n");
    scanf("%d",&m);
    return m;
}
int display_number(int n,int m)
{
    int num;
    int c;
    printf("Enter Number for Operation\n 1 for Addition\n 2 for Subtraction\n 3 for Multiplication\n 4 for Division\n");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
			c=n+m;
			printf("%d+%d=%d\n",n,m,c);
            return c;
			break;
			
		case 2:
			c=n-m;
			printf("%d-%d=%d\n",n,m,c);
            return c;
			break;
			
		case 3:
			c=n*m;
			printf("%d*%d=%d\n",n,m,c);
            return c;
			break;
			
		case 4:
			c=(n/m);
			printf("%d/%d=%d\n",n,m,c);
            return c;
			break;
			
		default:
			printf("Invalid Choice\n");
    }
    return display_number;
}

