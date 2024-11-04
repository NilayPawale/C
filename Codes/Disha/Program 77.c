#include<stdio.h>

int main()
{
    int a;
    printf("Enter the Values\n");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the Element\n");
    int i=0;
    for (i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        printf("%d",arr[i]);
    }

    int temp=0;
    for(i=0;i<a;i++)
    {
        printf("The Value is founded");
        temp=1;
        break;
    }
    if(temp==0)
    {
        printf("The Value is not found");
    }
}