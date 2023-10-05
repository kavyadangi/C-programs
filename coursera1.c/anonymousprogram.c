#include <stdio.h>
#include <math.h>

float sinfunc()   //function for printing sin values
{
    float x;
    printf("Sine values between 0 and 1:\n");
    for (x=0.0;x<=1.0;x+=0.1)
        printf("sin %f = %f\n",x,sin(x));
}
float cosfunc()  //function for printing cos values
{
    float x;
    printf("\nCosine values between 0 and 1:\n");
    for (x=0.0;x<=1.0;x+=0.1)
        printf("cos %f = %f\n",x,cos(x));
}

void main()
{
    //calling the functions
    sinfunc();
    cosfunc();
}