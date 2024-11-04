// Write a program to calculate Area and Perimeter of Triangle for given length of three sides of 
// triangle.  Use sqrt() function from math.h to calculate square root. 


#include <stdio.h>
#include <math.h>

int main() 
{
    double a, b, c;  // lengths of the sides
    double s, area, perimeter;

    // Accept the lengths of the sides from the user
    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side a: ");
    scanf("%lf", &a);
    printf("Side b: ");
    scanf("%lf", &b);
    printf("Side c: ");
    scanf("%lf", &c);

    // Calculate the perimeter
    perimeter = a + b + c;

    // Calculate the semi-perimeter
    s = perimeter / 2;

    // Calculate the area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Display the results
    printf("Perimeter of the triangle: %.2lf\n", perimeter);
    printf("Area of the triangle: %.2lf\n", area);

    return 0;
}
