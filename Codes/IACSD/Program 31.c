// Write a function isEven, which accepts an integer as parameter and returns 1 if the number is even, and 
// 0 otherwise. Use this function in main to accept n numbers and ckeck if they are even or odd. 
#include <stdio.h>

int isEven(int num) {
  return num % 2 == 0;
}

int main() {
  int n,i;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  for (i=0;i<n;i++) 
  {
    int num;
    printf("Enter element %d: ",i);
    scanf("%d", &num);

    if (isEven(num)) 
    {
      printf("%d is even\n", num);
    } 
    else 
    {
      printf("%d is odd\n", num);
    }
  }
} 