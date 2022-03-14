/* 
File: reverseDigit.c

this program generates the number that has the same 
digits in the reverse order.

*/

#include <stdio.h>

int main(){
    //declaring the variables n and remainder
    int n, remainder;

    // declared and initialised reverse
    int reverse = 0;
    
    //first output
    printf("This program reverses the digits in an integer.");

    // prompt user to enter a positive integer
    printf("\nEnter a positive integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10; // this remainder will always give you the first digit
        reverse = reverse * 10 + remainder;
        n /= 10; //dividing each n by 10 to reduce the digit
    }

    printf("The reversed number is %d", reverse);

    return 0;
}