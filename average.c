/*
* average.c
*
* Prints average of 3 numbers
*/
#include <stdio.h>
int main(){
    //variable decleration
    int num1, num2, num3;
    // assigning the numbers to variables
    num1 = 4;
    num2 = 5;
    num3 = 6;
    // simple formular for average
    float avg = (4 + 5  + 6) / 3;
    // output
    printf("Average of %d, %d, %d is %.2f \n", num1, num2, num3, avg);
}
