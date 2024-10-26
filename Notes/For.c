/*For Loop 1
#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a and b\n");
	scanf("%d %d",&a,&b);
	int i;
	for(i=a;i<=b;i++)
	{
		printf("%d\n",i);
	}
}*/

/*For Loop Factorial Assignment
#include <stdio.h>
int main()
{
	int i,number,fact=1;
	printf("Enter any number\n");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++)
	{
		fact = fact*i;
	}
	printf("Factorial is %d : %d",number,fact);
}*/

/*For Loop Multiplication Table
#include <stdio.h>
int main()
{
	int i;
	int number;
	scanf("%d",&number);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",number,i,number*i);
		//number=number*i;
	}
}*/

/*For Loop Prime-Not Prime Assignment
#include <stdio.h>
int main()
{
	int i,a,ans=0,b=0;
	printf("Enter any Number\n");
	scanf("%d",&a);
	b=a/2;
	for(i=1;i<=b;i++)
	{
		if(i%a==0)
		{
			printf("The no is not prime");
			ans=1;
			break;
		}
	}
}
if(ans==0)
{
	printf("The no is prime");
}*/

/*For Loop Sum 1
#include <stdio.h>
int main()
{
	int sum = 0;
	int i;
	for(i=0;i<=10;i++)
	{
		sum +=i;
	}
	printf("%d",sum);
}*/

/*For Loop Sum 2
#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a and b\n");
	scanf("%d %d",&a,&b);
	int sum=0;
	int i;
	for(i=a;i<=b;i++)
	{
		sum +=i;
	}
	printf("%d",sum);
}*/