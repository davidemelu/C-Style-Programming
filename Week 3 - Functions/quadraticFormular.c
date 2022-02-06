// Code: Helps user calculate the roots of a quadratic equation 

#include<stdio.h>
#include<math.h>

//quadratic void function
void quadraticRoots(int a, int b, int c){

//decleration
double value_x1, value_x2;

// compute value x1
value_x1 = 	(-b + (sqrt(pow(b,2)- 4*(a *c)))) / 2 * a;

// compute value x2
value_x2 = 	(-b - (sqrt(pow(b,2)- 4*(a *c)))) / 2 * a;

//output the values of x
printf("The values of X in %dx^2 + %dx + %d is %.2lf, %.2lf", a, b, c, value_x1, value_x2);


}

int main(){
	/* code */
//display for user
printf("Calculate quadratic formula: ax^2 + bx + c = 0");

//decleration	
int a, b, c;

//prompt user for a
printf("\nEnter the value for a in the quadratic equation:");
scanf("%d", &a);

//prompt user for b
printf("Enter the value for b in the quadratic equation:");
scanf("%d", &b);

//prompt user for c
printf("Enter the value for c in the quadratic equation:");
scanf("%d", &c);

quadraticRoots(a, b, c);
	return 0;
}
