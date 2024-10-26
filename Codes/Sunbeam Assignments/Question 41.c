//String Copy and Compare

#include<stdio.h>
#include<string.h>

int  mystrcpy(const char *p1, const char *p2)
{
    int diff;
    while(*p1 !=NULL && *p2!=NULL)
    {
        if(*p1 != *p2)
            break;
    p1++;
    p2++;
    }
    diff = *p1 - *p2;
    if(diff > 0)
        return 1;
    else if(diff < 0)
        return -1;
    else
        return 0;
}

int main()
{
    char s1[20];    //s1=100
    char s2[20];    //s2=200
    int result;
    printf("Specify string \n");
    fgets(s1,sizeof(s1),stdin);

    result = mystrcpy(s1,s2);  //strcmp(100,200)
    printf("result = %d \n",result);
    if(result > 0)
        printf("%s  is grater than %s",s1,s2);
    else if(result < 0)
        printf("%s  is less than %s",s1,s2);
    else
        printf("%s  is similar to  %s",s1,s2);

}