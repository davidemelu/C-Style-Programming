#include<stdio.h>

void positivePair(int positiveNumber);

int main(){
    //delcare
    int positiveInteger;

    // prompt user
    printf("Enter positive number:");
    scanf("%d", &positiveInteger);

    // postive pair display
    positivePair(positiveInteger);
    
    return 0;
}

// function to display positve pair
void positivePair(int positiveNumber){
    int i;
    for (int i = 1; i * i <= positiveNumber; i++){
        if (positiveNumber % i == 0){
            printf("%d;%d\n", i, positiveNumber / i);
        } 
    }
}