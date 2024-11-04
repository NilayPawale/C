// Write a program to accept an integer array and an integer say num and counts the occurrences of the 
// num in the array. 
#include <stdio.h>

int main()
{
	int n, i, num, count = 0;

	printf("Please Enter the Array n = ");
	scanf("%d", &n);

	int arr[n];
	
	printf("Enter the Array %d elements : ", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Please Enter the Array Item to Know = ");
	scanf("%d", &num);

	for (i = 0; i < n; i++)
	{
		if (arr[i] == num)
		{
			count++;
		}
	}

	printf("%d Occurred %d Times.\n", num, count);
} 