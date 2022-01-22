/*
 Paint.c
 
 Purpose: Determine how much paint is needed to paint the walls
 of a room given its length, width, and height
 
 Created by David Emelu on 2022-01-16.
*/

#include <stdio.h>
int main(){
const int COVERAGE = 350; //paint covers 350 sq ft/gal
int length, width,height;
double totalSqFt;
double paintNeeded;
//Prompt for and read in the length of the room
printf("Enter the length of the room in ft: ");
scanf("%d", &length);
    
//Prompt for and read in the width of the room
printf("Enter the width of the room in ft: ");
scanf("%d", &width);
    
//Prompt for and read in the height of the room
printf("Enter the height of the room in ft: ");
scanf("%d", &height);
    
//Compute the total square feet to be painted
totalSqFt = 2 *((length * height) + (height * width)); //tsa for the room is 2lh + 2hw
    
//Compute the amount of paint needed
paintNeeded = totalSqFt / (double)350;
printf("%.3lf gallons of paint are needed to paint a room\n", paintNeeded);
    
//Print length, width, and height of the room and of gallons of paint needed.
printf("%d feet wide by %d feet long by %d feet high\n", width, length, height);
return 0;
}
