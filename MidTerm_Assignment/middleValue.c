#include<stdio.h>

float middleVlue(float number1, float number2, float number3);

int main(){
    // delceration
    float num1, num2, num3;

    // prompt for user
    printf("Enter the three numbers(a b c): ");
    scanf("%f %f %f", &num1, &num2, &num3);
    
    // middle value varialbe
    float middle  = middleVlue(num1, num2, num3);

    //outputs middle value
    printf("The middle value in %.3f, %.3f, %.3f is %.3f", num1, num2, num3, middle);

    return 0;
}

// defined function to get the middle value
float middleVlue(float number1, float number2, float number3){
    //middle variable
    float middle = 0;

    //checking number 1 is the middle number or not
    if(number2>number1 && number1>number3 || number3>number1 && number1>number2){
        middle = number1;
    }
    //checking number 2 is a middle number or not
    if(number1>number2 && number2>number3 || number3>number2 && number2>number1){
        middle =  number2;
    }
    //checking number 3 is a middle number or not
    if(number1>number3 && number3>number2 || number2>number3 && number3>number1){
        middle  = number3;
    }
    return middle;    
}