//Write a program to calculate factors of a given number.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number\n");
	scanf("%d",&n);

	printf("Factors of %d are : \n", n);
        
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            printf("%d, ", i);
    }
} 