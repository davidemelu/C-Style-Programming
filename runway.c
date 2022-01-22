/*
 runway.c
 
 Purpose: This program displays the minimum length of the runway when
 the velcoity and the acceleration is given

 Created by David Emelu on 2022-01-21.
*/

#include<stdio.h>
#include<math.h>

int main(){
//deceleration
int velocity;
float acceleration;
float length;

//user input speed and acceleration
printf("Enter speed (m/s) and acceleration (m/s/s):");
scanf("%d%f", &velocity, &acceleration);

//compute length
float velocitySqr = velocity * velocity;
length =  velocitySqr / (2 * acceleration);

// display the minimun leghths

//compute for cm
int decimals = length;
float cm = length - decimals;
cm = cm * 100;

//compute for mm
int second_decmial = cm;
float mm = cm - second_decmial;
mm = mm * 10;
printf("The minimum runway length for this airplane is %.0fm, %.0fcm and %.0fmm", length, floor(cm), floor(mm));
    return 0;
}