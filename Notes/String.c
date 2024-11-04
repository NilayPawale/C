/*String 1 Example
#include<stdio.h>
#include <string.h>
int main()
{
	char ch[11]={'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'};
	char ch2[11]="javatpoint";
	
	printf("Char Array Value is: %s\n", ch);
	printf("String Literal Value is: %s\n", ch2);
	
	return 0;
}*/

/*String 2 Length
#include<stdio.h>
#include <string.h>
int main() 
{
	char ch[20]={'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'};
	printf("Length of string is: %d",strlen(ch));
	
	return 0;
}*/

/*String 3 Copy
#include<stdio.h>
#include <string.h>
int main()
{
	char ch[20]={'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'};
	char ch2[20];
	strcpy(ch2,ch);
	printf("Value of second string is: %s",ch2);
	
	return 0;
}*/

/*String 4 Concatenation
#include<stdio.h>
#include <string.h>
int main()
{
	char ch[10]={'h', 'e', 'l', 'l', 'o', '\0'};
	char ch2[10]={'c', '\0'};
	strcat(ch,ch2);
	printf("Value of first string is: %s",ch);
	
	return 0;
}*/

/*String 5 Compare
#include<stdio.h>
#include <string.h>
int main()
{
	char str1[20],str2[20];
	printf("Enter 1st string: ");
	gets(str1);//reads string from console
	printf("Enter 2nd string: ");
	gets(str2);
	if(strcmp(str1,str2)==0)
	{
		printf("Strings are equal");
	}
	else
	{
		printf("Strings are not equal");
	}
	return 0;
}
*/

/*String 6 Lower Case
#include<stdio.h>
#include <string.h>
int main()
{
	char str[20];
	printf("Enter string: ");
	gets(str);//reads string from console
	printf("String is: %s",str);
	printf("\nLower String is: %s",strlwr(str));
	
	return 0;
} */

