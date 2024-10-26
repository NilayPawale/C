// Write a program to accept a character c and display category of the input character. 
// ALPHABET :  c is a letter (65 to 90 or 97 to 122) 
// UPPERCASE :  c is an uppercase letter (65 to 90) 
// LOWERCASE :  c is a lowercase letter (97 to 122) 
// DIGIT  :  c is a digit (48 to 57) 
// SPACE  :  c is a space(32), tab(9), carriage return(13), new line(10) 
// OTHER  :  Not listed above 


# include<stdio.h>

int main()
{
    char c;

    printf("Enter Alphabet\n");
    scanf("%c",&c);

    if (c>=65 && c<=90 || c>=97 && c<=122)
    {
        if (c>=65 && c<=90)
        {
            printf("UPPER CASE\n");
            printf("%c is a Upper Case Character\n",c);
        }
        else if (c>=97 && c<=122)
        {
            printf("LOWER CASE\n");
            printf("%c is a Lower Case Character\n",c);
        }
    }
    else if (c>=48 && c<=57)
        {
            printf("DIGIT\n");
            printf("%c is a Digit\n",c);
        }
    else if (c == 32 || c == 9 || c == 13 || c == 10)//32-Space 9-Tab 13-Carraige Return 10-New Line
        {
            printf("SPACE\n");
            printf("%c is a Space\n",c);
        }
    else
    {
        printf("OTHER\n");
        printf("%c is Not Listed Above\n",c);
    }
    
}