// Write a program to accept a 4 digit number and 

// a. Display face value of each decimal digit 
// b. Display place value of each decimal digit 
// c. Display no in reverse order by changing decimal place values 

// If user enters a 4 digit number 9361 output should be 
// a. 9 3 6 1 
// b. 9361 = 9 000  +  300 + 60 + 9 
// c. 1639


#include <stdio.h>

int main() 
{
    int number, thousands, hundreds, tens, ones, reverse;

    // Accept a 4-digit number from the user
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    // Extract each digit
    thousands = number / 1000;        // Thousands place
    hundreds = (number / 100) % 10;   // Hundreds place
    tens = (number / 10) % 10;        // Tens place
    ones = number % 10;               // Ones place

    // a. Display face value of each decimal digit
    printf("Face values: %d %d %d %d\n", thousands, hundreds, tens, ones);

    // b. Display place value of each decimal digit
    printf("Place values: %d = %d000 + %d00 + %d0 + %d\n", number, thousands, hundreds, tens, ones);

    // c. Display the number in reverse order
    reverse = ones * 1000 + tens * 100 + hundreds * 10 + thousands;
    printf("Number in reverse: %d\n", reverse);

    return 0;
}
