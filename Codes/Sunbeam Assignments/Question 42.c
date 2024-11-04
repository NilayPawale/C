//String Copy

#include<stdio.h>
#include<string.h>

int main()
{
    char ch1[20];
    char ch2[20];
    int result;

    printf("Enter String Elements\n");
    fgets(ch1,sizeof(ch1),stdin);

    result = strcpy(ch1,ch2);  
    printf("result = %s \n",result);
}
