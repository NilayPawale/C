//DEMO_1
#include <stdio.h>
int main()
{
    int i,n;
    
    printf("Enter the Number of Array Elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Elements of Array\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
} 