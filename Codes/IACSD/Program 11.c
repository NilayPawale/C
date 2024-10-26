// Write a program to accept n numbers in an array and display the largest and smallest number. Using 
// these values, calculate the range of elements in the array. 
#include <stdio.h>

int main() 
{
    int n, arr[100], i;
    int largest, smallest; // Initialize before loop for clarity

    printf("Enter the number of elements (maximum 100): ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find largest and smallest elements
    largest = smallest = arr[0]; // Initialize with first element
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        } else if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Calculate range
    int range = largest - smallest;

    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);
    printf("Range of elements: %d\n", range);

    return 0;
} 