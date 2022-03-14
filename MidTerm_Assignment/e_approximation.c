/**
 * @file e_approximation.c
 * @author David Emelu
 * @brief this program displays the e value by summing the 
 * first 2, 3, … 20 terms of the infinite series.
 * 
 * @date 2022-03-13
 */

#include<stdio.h>
#include<math.h>

double factorial(int number);
double eValue(int term);

int main(){

    int count;
    double e;
    for (count = 2; count < 21; count++){
        e = eValue(count);
        printf("Terms: %d\t\t%lf\n", count, e);

    }

    return 0;
}

// function for factorial
double factorial(int number){
    int product = 1;
    if(number == 0)
        return 1;
    // for n not equal to 0
    for(int i = 1; i <= number; i++){
        product = product * i;
    }
    return product;
}

// function to find the e value
double eValue(int term){
    double e;
    if(term == 1) {
        e = 1.0;
    }
    else {
        e = eValue(term - 1) + (1.0 / factorial(term - 1));
    }
    return e;
}
