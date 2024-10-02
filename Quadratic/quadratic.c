/*
Objective: To evaluate quadratic equation by capturing coefficients from user.
Author: Devadath R Varma
*/


#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c;
    float discriminant,root1,root2,realPart,imagPart;

    printf("Enter the coefficients a, b and c:");
    scanf("%f %f %f",&a,&b,&c);

    discriminant=b*b-4*a*c; // Calculating the discriminant

     // Evaluate roots based on the discriminant
    if(discriminant>0){
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("Roots are real and distinct: \n");
        printf("Root1=%.2f\n", root1);
        printf("Root2=%.2f\n",root2);
    }
    else if (discriminant==0)
    {
        root1=-b/(2*a);
        printf("Roots are real and equal. \n");
        printf("Root1=Root2=%.2f\n",root1);
    }
    else{
        realPart=-b/(2*a);
        imagPart=sqrt(-discriminant)/(2*a);
        printf("Roots are complex and imaginary: \n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }
    return 0;

}