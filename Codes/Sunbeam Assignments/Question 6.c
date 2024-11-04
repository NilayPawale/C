//Write a program to accept an integer value and print its table. 

#include <stdio.h>

int main() 
{
    int number;

    // Accept an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Print the multiplication table
    printf("Multiplication Table of %d:\n", number);
    for (int i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
