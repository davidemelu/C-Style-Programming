/*
loan.c 

computes monthly and total payment of a loan based on interest rate and number of years.

*/

#include <stdio.h>
#include <math.h>

void computeLoan(double amount, double interest, int years){

// declarations
double monthlyPayment, totalPayment, monthlyInterest;

// compute monthly and total payment
monthlyInterest = (interest / 100) / 12; // Formular for interset per month
double numeratorOfMonthlyPaymentFormular = (amount * monthlyInterest); //Numerator
double denominatorOfMonthlyPaymemtFormular = 1 - (1 / (pow((1 + monthlyInterest),(years * 12)))); // Denominator
monthlyPayment = numeratorOfMonthlyPaymentFormular / denominatorOfMonthlyPaymemtFormular;

//Total payments
totalPayment = monthlyPayment * years * 12;

// display the monthly and total payment
printf("---------------------------------");
printf("\nThe monthly payment is %.2lf ", monthlyPayment);
printf("\nThe total payment is %.2lf", totalPayment);
printf("\n---------------------------------");
}

int main(){
//declarations
double amount, interest; 
int years;
char percent_sign = '%';

// prompt user to enter interest rate
printf("Enter annual interest rate in %c, e.g. 5.75: ", percent_sign);
scanf("%lf", &interest);

// prompt user to enter loan amount
printf("Enter loan amount, e.g. 12000.95: ");
scanf("%lf", &amount);

// prompt user to enter number of years
printf("Enter number of years as an integer, e.g. 5: ");
scanf("%d", &years);

// call the function computeLoan()
computeLoan(amount, interest, years);

return 0;
}
