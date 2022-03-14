#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int count = 0;
    int total  = 0;
    clock_t t;
    t = clock();

    while (count < 5){
        int number1;
        int number2;

        //sets the initial point (seed) for generating random numbers
        srand(time(NULL));

        // random number between 0 and 9 inclusive
        number1 = rand() % 10;
        number2 = rand() % 10;
        int userAnswer;
        int subtraction;
        subtraction = number1 - number2;
        printf("\nwhat is %d - %d = ", number1, number2);
        scanf("%d", &userAnswer);

        if (userAnswer == subtraction){
            printf("You are correct\n");
            total ++;
        } 
        if (userAnswer != subtraction){
            printf("You are wrong\n");
            printf("%d - %d should be %d\n", number1, number2, subtraction);
            total --;
        }   
        count++;
    }
    t = clock() - t;
    double timetaken = ((double)t)/CLOCKS_PER_SEC;

    int average = (total /count) * 100;
    printf("\nCorrect count is %d\n", total); 
    printf("count is %d\n", count);
    printf("Test time %lf seconds\n", timetaken);
    printf("Your average for this test is %d percent\n", average);
    // current time in seconds since January 01, 1970
    printf("\nCurrent Time: %ld seconds\n", time(NULL));

return 0;
}