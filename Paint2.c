/*
 Paint2.c
 
 Purpose: Determine how much paint is needed to paint the walls
 of a room given its length, width, and height. Suppose the room has doors and windows 
 that don't need painting.
 
 Created by David Emelu on 2022-01-20.
*/

#include <stdio.h>
int main(){
const int COVERAGE = 350; //paint covers 350 sq ft/gal
const int EACH_DOOR = 20;
const int EACH_WINDOW = 15;
int length, width, height;
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

//Prompt for the number of doors
int numOfDoors;
printf("How many doors are in the room? ");
scanf("%d", &numOfDoors);

//Prompt for the number of windows
int numOfWindows;
printf("How many windows are in the room? ");
scanf("%d", &numOfWindows);

//Compute the total square feet of doors and windows
int totalSqFt_Of_D_and_W = (EACH_DOOR * numOfDoors) + (EACH_WINDOW * numOfWindows);

//Compute the total square feet to be painted
totalSqFt = (2 *((length * height) + (height * width))); //tsa for the room is 2lh + 2hw
totalSqFt = totalSqFt - totalSqFt_Of_D_and_W;
    
//Compute the amount of paint needed
paintNeeded = totalSqFt / (double)COVERAGE;
printf("%.3lf gallons of paint are needed to paint a room\n", paintNeeded);
    
//Print length, width, and height of the room and of gallons of paint needed.
printf("%d feet wide by %d feet long by %d feet high with %d doors and %d windows\n", width, length, height, numOfDoors, numOfWindows);
return 0;
}
