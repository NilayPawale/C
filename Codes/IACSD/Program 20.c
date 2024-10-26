#include <stdio.h>
 int main()
 {
	int i,n,d,num1,den1,num2,den2,c;
	printf("Enter numerator and denominator of first fraction: ");
    scanf("%d %d", &num1, &den1);

    printf("Enter numerator and denominator of second fraction: ");
    scanf("%d %d", &num2, &den2);

	printf("Enter the Choice\n 1.Add\n2.Subtract\n3.Multiply\n ");
	scanf("%d",&c);
	

	switch(c)
	{
		case 1:
			n=(num1*den2)+(num2*den1);
			d=(den1*den2);
			printf("Addition is %d/%d",n,d);
			break;
		case 2:
			n=(num1*den2)-(num2*den1);
			d=(den1*den2);
			printf("Subtraction is %d/%d",n,d);
			break;
		case 3:
			n=num1*num2;
			d=den1*den2;
			printf("Multiplication is %d/%d",n,d);
			break;
	}
 } 