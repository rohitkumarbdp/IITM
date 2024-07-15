//Prefix Code(Visible)
#include <stdio.h>
#include <math.h>
int main() 
{
    //Initialization of variables
    double principal, annualRate, monthlyRate, monthlyPayment;
    int numMonths;
    
    //Reading Inputs
    scanf("%lf", &principal);
    scanf("%lf", &annualRate);
    scanf("%d", &numMonths);
    // Write code below to calculate the monthly payment and store the result in monthlyPayment variable
    double P, R, r;
    P = principal;
    R = annualRate;
    int n = numMonths;
    r = R/(1200.0);
    
    monthlyPayment = (P * r *(pow((1+r), n)))/(pow((1+r),n)-1);
   //Printing the output
    printf("%.0lf", monthlyPayment);
    return 0;
}