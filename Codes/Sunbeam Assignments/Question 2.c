//Write a program to accept a number and print the number in character, decimal, octal and hex formats. 

#include <stdio.h>

int main() 
{
    int number;

    // Accept a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Display the number in different formats
    printf("Character: %c\n", number);      // Character format
    printf("Decimal: %d\n", number);        // Decimal format
    printf("Octal: %o\n", number);          // Octal format
    printf("Hexadecimal: %x\n", number);    // Hexadecimal format (lowercase)
    printf("Hexadecimal (uppercase): %X\n", number); // Hexadecimal format (uppercase)

    return 0;
}
