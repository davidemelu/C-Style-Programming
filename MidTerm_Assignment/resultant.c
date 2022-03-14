/*
File: resultant.c

This program prompt the user for the number of vectors.
b. prompt the user to enter the vector(s) in polar form (magnitude and angle in degrees), then
c. output the x and y components of the resultant and
d. output in polar form the resultant.
*/
#include<stdio.h>
#include<math.h>

double x_Component(double magnitude, double angle);
double y_Component(double magnitude, double angle);
double magnitude(double xComponent, double yComponent);
double angle(double xComponent, double yComponent);

int main(){
    //initializing count
    int count = 0;

    // individual varuiable for the x and y resultant component
    double resultantX = 0;
    double resultantY = 0;

    // declaring number of vector, angle, magnitude, x any y values
    double mag, angle, xValue, yValue;
    int noOfVecetor;

    // prompt user, asking number of vector
    printf("How many vectors? ");
    scanf("%d", &noOfVecetor);

    while (count < noOfVecetor){
            // prompt user, asking for the magnitude and 
            printf("Enter vector %d (mag, angle):", count+1);
            scanf("%lf %lf", &mag, &angle);

            //resultant x component
            xValue = x_Component(mag, angle);
            resultantX = resultantX + xValue;

            //resultant y component
            yValue = y_Component(mag, angle);
            resultantY = resultantY + yValue;

            count++;
        }
        double PolarFormMagnitude = magnitude(resultantX, resultantY);
        
            printf("\nThe resultant in rectangular form is:");
            printf("\nx-component = %lf", resultantX);
            printf("\ny-component = %lf", resultantY);
            printf("\nThe polar form of the resultant is:");
            printf("\nMagnitude = %lf", PolarFormMagnitude);
            printf("\nAngle with positive x-axis = degrees"); 
        return 0;
    }

// return function to calculate x component
double x_Component(double magnitude, double angle){
    angle = angle * (M_PI / 180);
    double x_Value = magnitude * cos(angle);
    return x_Value;
}

// return function to calculate y component
double y_Component(double magnitude, double angle){
    angle = angle * (M_PI / 180);
    double y_Value = magnitude * sin(angle);
    return y_Value;
}

// return function to calculate the magnitude
double magnitude(double xComponent, double yComponent){
    double insideSqrt = (pow(xComponent, 2) + pow(yComponent, 2));
    double pythagoras = sqrt(insideSqrt);
    return pythagoras;
}

/*
//return function for the angle with positive x-axis
double angle(double xComponent, double yComponent){
    //declare 
    double angleX;

    // quadrant 1
    if ((y_Component / xComponent) > 0){
        angleX = atan(y_Component / xComponent);
        return angleX;
    }

    //quadrant 2
    else if((y_Component / xComponent) < 0){
        angleX = M_PI + atan(y_Component / xComponent);
        return angleX;
    }

    // quadrant 3
    else if((y_Component / xComponent)){
        angleX = M_PI + atan(y_Component / xComponent);
        return angleX;
    }

    // quadrant 4
    else if((y_Component / xComponent)){
        angleX = (2 * M_PI) + atan(y_Component / xComponent);
        return angleX;
    }

} */
