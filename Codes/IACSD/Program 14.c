// Write a program to accept n numbers from the user and store them in an array. Then sort the array in 
// descending order and display it. 
  
// C program to sort array elements in descending order 
  
#include <stdio.h> 
  
int main() 
{ 
  	int n, i, j, t = 0; 
    int a[100]; 
    printf("Enter the Numnber\n");
    scanf("%d",&n);
    printf("Enter the Elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   
    
    // iterates the array elements 
    for (i = 0; i < n; i++) { 
        
        // iterates the array elements from index 1 
        for (j = i + 1; j < n; j++) { 
            
            // comparing the array elements, to set array 
            // elements in descending order 
            if (a[i] < a[j]) { 
                t = a[i]; 
                a[i] = a[j]; 
                a[j] = t; 
            } 
        } 
    } 
    // printing the output 
    for (i = 0; i < n; i++) { 
        printf("%d ", a[i]); 
    } 
    return 0; 
} 