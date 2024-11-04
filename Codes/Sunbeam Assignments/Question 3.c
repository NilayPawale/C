//Print the ASCII value of user entered character in decimal, hex, octal format and also print the character for user entered ASCII value.  


#include <stdio.h>


// int main()
// {
//     char ch;
//     printf("Enter a Character\n");
//     scanf("%c",&ch);
//     printf("ch=%d,ch=%c,ch=%x,ch=%o,ch=%u\n",ch,ch,ch,ch);

//     int ASCII=87;
//     printf("ASCII=%d,ASCII=%c,ASCII=%x,ASCII=%o,ASCII=%u\n",ASCII,ASCII,ASCII,ASCII);

// }

//OR

int main() 
{
    char character;
    int asciiValue;

    // Accept a character from the user and print its ASCII value in different formats
    printf("Enter a character: ");
    scanf(" %c", &character);

    printf("\nASCII value of '%c' in:\n", character);
    printf("Decimal: %d\n", character);
    printf("Hexadecimal: %x\n", character);
    printf("Octal: %o\n", character);

    // Accept an ASCII value and print the corresponding character
    printf("\nEnter an ASCII value (0-127): ");
    scanf("%d", &asciiValue);

    if (asciiValue >= 0 && asciiValue <= 127) {
        printf("Character for ASCII value %d is: '%c'\n", asciiValue, asciiValue);
    } else {
        printf("Invalid ASCII value. Please enter a value between 0 and 127.\n");
    }

    return 0;
}
