#include <stdio.h>

double mult(double a, double b);
double power(double a, double n);

int main(void)

{
 printf("%f\n", power(3.45, 6));
}

double mult(double a, double b) {return a*b;}

double power(double a, double n)
{
    double result=a;

    for (int i=1;i<n;i++)
    {
        result = mult(result,a);
    }
    
    return result;
    
}