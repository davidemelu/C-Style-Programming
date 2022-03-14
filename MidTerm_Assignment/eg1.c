#include<stdio.h>
#include<math.h>


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

double eValue(int term){
    const int unit = 1;
    double value = (1 / factorial(term));
    double e = unit + value;
    return e;
}

int main(){
    int term = 3;
    int n = term - 1;
    int i = 1;
    printf("term %d", term);
    printf("factorial is %lf\n", factorial(term));
    printf("e Value is %f", eValue(term));

    printf("\n%d + %d/%d! is %lf", i, i, term, eValue(term));
    return 0;
}        
