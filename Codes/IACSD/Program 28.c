//Write a program to print all prime numbers between 1 to n. 
#include <stdio.h>
int main() 
{
  int n,i,j;
  printf("Enter the upper limit : ");
  scanf("%d", &n);

  printf("Prime numbers between 1 and %d are:\n", n);

  for (i = 2; i <= n; i++) 
  {
    int is_prime = 1;

    for (j = 2; j * j <= i; j++) 
	{
      if (i % j == 0) 
	  {
        is_prime = 0; 
        break;
      }
    }

    if (is_prime) 
	{
      printf("%d ", i);
    }
  }

  printf("\n");
  return 0;
} 