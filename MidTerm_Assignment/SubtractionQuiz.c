/**
 * @file SubtractionQuiz.c
 * @author David Emelu
 * @date 2022-03-13
 * @brief The program should prompt the user repeatedly 5 times with a subtraction question
 * of two random single-digit integer numbers and grade the questions.After a student answers 
 * all five, the program reports the number of correct answers. The program also displays the
 * time spent on the test
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int count = 0;
    double totalCorrect = 0;

    time_t timeStart;
    timeStart = time(NULL); // current time in seconds since January 01, 1970

    while (count < 5){
        int number1;
        int number2;

        // sets the initial point (seed) for generating random numbers
        srand(time(NULL));

        // random number between 0 and 9 inclusive
        number1 = rand() % 10;
        number2 = rand() % 10;
        int userAnswer;
        int subtraction;
        subtraction = number1 - number2;
        printf("\nwhat is %d - %d = ", number1, number2);
        scanf("%d", &userAnswer);
        count++;

        if (userAnswer == subtraction){
            printf("You are correct\n");
            totalCorrect++;
        } 
        if (userAnswer != subtraction){
            printf("You are wrong\n");
            printf("%d - %d should be %d\n", number1, number2, subtraction);
        }   
    }
    // formular for average is totalcorrect answers divided by the 5 question x 100
    double ratio = totalCorrect / count;
    double percentageOfTest = ratio * 100;

    printf("\nCorrect count is %.0lf", totalCorrect);

    // time after the test
    time_t timeStop;
    timeStop = time(NULL);
    printf("\nTest time %ld seconds\n", timeStop - timeStart);

    // output the percent
    char percentageSign = '%';
    printf("Your average for this test is %.2lf%c\n", percentageOfTest, percentageSign);

return 0;
}
