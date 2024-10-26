//Write a program to accept three integer numbers and find its average. 

#include <stdio.h>

int main() 
{
    int num1, num2, num3;
    float average;

    // Accept three integers from the user
    printf("Enter three integer numbers:\n");
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);
    printf("Number 3: ");
    scanf("%d", &num3);

    // Calculate the average
    average = (num1 + num2 + num3) / 3.0; // Use 3.0 to ensure float division

    // Display the average
    printf("The average of %d, %d, and %d is: %.2f\n", num1, num2, num3, average);

    return 0;
}
