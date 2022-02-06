/*
tempConverter.c

This program should read the temperature in Celsius degree in 
double value from the user, then convert it to Fahrenheit and displays the result.

*/

#include<stdio.h>

void convertC2F(double cTemp){
// declare the base constant 32
const int BASE = 32;
// declare the conversion factor constant 9 / 5
const double CONVERSIONFACTOR = 9 / 5.0;
// declare Fahrenheit temperature variable
double fahrenheit;
// compute temperature in Fahrenheit
fahrenheit = (CONVERSIONFACTOR * cTemp) + BASE;
// output the result
printf("Fahrenhiet Temperature: %.2lf", fahrenheit);
}

int main(){
double cTemp;
// prompt user to input temperature in Celsius
printf("Enter the Celcius Temperature: ");
scanf("%lf", &cTemp);
// call the function and pass to it the user input
convertC2F(cTemp);

return 0;
}