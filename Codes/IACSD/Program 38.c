// Accept temperatures in Fahrenheit (F) and print it in Celsius(C) and Kelvin (K) (Hint: C=5/9(F-32), K = C + 273.15) 
#include <stdio.h>
int main()
{
	float f,c,k;
	
	//For Fahrenheit to Celcius and Kelvin
	printf("Enter the Temperature in Fahrenheit\n");
	scanf("%f",&f);
	c=((float)5/9)*(f-32);
	printf("The Temperature in Celcius is : %f\n",c);
	k =c+273.15;
	printf("The Temperature in Kelvin is : %f\n",k);
} 