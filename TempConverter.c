/*
TempConverter.c

Converts Celsius temperature value to its equivelant Fahrenheit value

Created by David Emelu on 2022-01-16.
*/

#include <stdio.h>
int main(){
// declare the base constant 32
const int base = 32;
// declare the conversion factor constant 9 / 5
const float conv_fac = (float) 9 / 5;
// declare Celsius and Fahrenheit temperatures
float temp_celcius, temp_fahrnt;
// prompt user to input temperature in Celsius
printf("Enter the Celcius Temperature:\n");
scanf("%f", &temp_celcius);
// compute temperature in Fahrenheit
temp_fahrnt = (conv_fac * temp_celcius) + base;
// output the result
printf("Fahrenheit Temperature: %.2f", temp_fahrnt);
return 0;
}