// Write a program to accept an array of n elements and a number say key.  Check whether key is present 
// in the array or not. 
#include <stdio.h>
 #include <stdlib.h>

  int main() 
  {
    int arr[30], n, i, num, flag=0;

    printf("Enter size of array. \n");
    scanf("%d",&n);

    printf("Enter %d array elements one by one. \n",n);
    for (i=0; i<n; i++) 
	{
        scanf("%d ",&arr[i]);
    }

    printf("Enter the number you wish to look for. \n");
    scanf("%d",&num);

    for(i=0;i<n;i++) 
	{
        if (num == arr[i]) 
		{
            flag++;
        }
    }

    if (flag>0) 
	{
        printf("The number %d is present in the array.",num);
    } else 
	{
        printf("The number %d is not present in the array.",num);
    }
 } 