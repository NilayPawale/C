//WAP to accept an array of n integers and calculate sum of odd numbers and even numbers using the 
//pointer to an array. 
#include <stdio.h>

void calculate(int *arr, int n) {
  int i;
  int sum_even = 0;
  int sum_odd = 0;

  for (i=0;i<n;i++) 
  {
    if (*(arr+i)%2 == 0) 
    {
      sum_even= sum_even + *(arr+i);
    } 
    else 
    {
      sum_odd= sum_odd + *(arr+i);
    }
  }

  printf("Sum of even numbers: %d\n", sum_even);
  printf("Sum of odd numbers: %d\n", sum_odd);
}

int main() {
  int n,i;

  printf("Enter the size of the array: ");
  scanf("%d", &n);

  int arr[n];

  printf("Enter the elements of the array:\n");
  for (int i=0; i < n; i++) 
  {
    scanf("%d", &arr[i]);
  }

  calculate(arr, n);

  return 0;
} 