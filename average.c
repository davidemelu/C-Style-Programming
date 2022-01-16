/*
* average.c
*
* Prints average of 3 numbers
*/
#include <stdio.h>
int main(){
    int num1, num2, num3;
    num1 = 4;
    num2 = 5;
    num3 = 6;
    float avg = (4 + 5  + 6) / 3;
    printf("Average of %d, %d, %d is %.2f \n", num1, num2, num3, avg);
}
