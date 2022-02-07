/* File: wages.c 

*  The purpose of this program is to calculate the weekly pay
   of employees based on hours work and hourly wage.

*/

#include <stdio.h> 
#define STANDARD 40.0 
#define TAX 5.06

void weeklyPay(double hours, double hourly_wage){ 
// declaration
double grossPay, incomeTax, netPay, extra_hour, overTimePay;

// check hours and computer pay accordingly
if (hours > STANDARD){
	overTimePay = (hours - STANDARD) * hourly_wage * 1.5;
	grossPay = overTimePay + ((hours - (hours - STANDARD)) * hourly_wage);
	incomeTax = (TAX / 100) * grossPay;
	netPay = grossPay - incomeTax;
}
else{
	grossPay = hours * hourly_wage;
	incomeTax = (TAX / 100) * grossPay;
	netPay = grossPay - incomeTax;
}
//output gross pay, income tax and net pay
printf("Gross pay before tax: $%.2lf", grossPay);
printf("\nIncome tax: $%.2lf", incomeTax);
printf("\nNet pay: $%.2lf", netPay);
}

int main(void){

double hours, hourly_wage; // decarations
;
//prompt user to enter hours and hourly wage
printf("Enter total hours:");
scanf("%lf", &hours);

printf("Enter hourly wage:");
scanf("%lf", &hourly_wage);

//call the void type function weeklyPay and pass to it the hours and hourly wage
weeklyPay(hours, hourly_wage);
return 0; 
}