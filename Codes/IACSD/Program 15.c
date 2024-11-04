//Write a program to accept a decimal number and convert it to binary.
#include <stdio.h>

int main() 
{
    int decimal_num, binary_num = 0, i, remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);

    for(i=1;decimal_num != 0;i *= 10)
    {
    	remainder = decimal_num % 2;
        decimal_num /= 2;
        binary_num += remainder * i;
	}

    printf("Binary number: %d\n", binary_num);

    return 0;
} 