/* this program calculates the factorial of an integer number using recursion*/
#include <stdio.h>
int factorial(int n){
    if (n == 0){
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }

}

int main(void){

    int fact = factorial(7);
    printf("%d\n", fact);
    printf("%d\n",factorial(0));

    double num = 1.0/factorial(0) + 1.0/factorial(1) + 1.0/factorial(2) + 1.0/factorial(3) + 1.0/factorial(4);
    printf("%f\n", num);
    return 0;
}
