//Write a program to convert temperature in Celsius to Fahrenheit and vice versa.

#include<stdio.h>

int main()
{
    float c;
    float f;

    //For Finding in Celcius
    printf("Temperature in Fahrenheit\n");
    scanf("%f",&f);
    c=((float)5/9)*(f-32);
    printf("Temperature in Celcius is %.2f\n\n",c);

    //For Finding in Fahereheit
    printf("Temperature in Celcius\n");
    scanf("%f",&c);
    f=(((float)9/5*c)+32);
    printf("Temperature in Fahrenheit is %.2f\n",f);
}