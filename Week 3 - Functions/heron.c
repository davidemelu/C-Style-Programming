/*
heron.c 

calculate the area of a triangle give three sides

*/

#include <stdio.h>
#include <math.h>

void printArea(int a, int b, int c){

// declarations
int s;

int perimeter = a + b + c;
s = 0.5 * perimeter;  // half of the perimeter

// compute using heron formula
int insideformular = s * ((s - a) * (s - b) * (s - c));
double area = sqrt(insideformular);

// display area
printf("The area of a triangle with sides %d, %d and %d is: %.2lf \n", a, b, c ,area);
}

int main(){

// call the function printArea twice with different arguments
printArea (3, 4, 5);
printArea(6, 8, 10);
return 0;
}