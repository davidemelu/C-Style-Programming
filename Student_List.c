/*
  Student_List.c

  Prints a list of 10 students and their grades

  Created by David Emelu on 2022-01-16.
*/

#include <stdio.h>

int main() {
    // Header designs and header
    printf("\n");
    printf("//////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");
    printf("==            STUDENTS POINTS           == \n");
    printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\//////////////////// \n");
    printf("\n");
    // rows and columns
    printf("Name\t Lab(60)\t Bonus(10)\t Total(70) \n");
    //design below the top row
    printf("----\t -------\t ---------\t --------- \n");
    // student names
    printf("David\t 60\t\t\t 10\t\t\t 70 \n");
    printf("Daniel\t 57\t\t\t 6\t\t\t 63 \n");
    printf("Charles\t 56\t\t\t 8\t\t\t 64 \n");
    printf("Chioma\t 59\t\t\t 5\t\t\t 64 \n");
    printf("Esther\t 48\t\t\t 10\t\t\t 58 \n");
    return 0;
}

