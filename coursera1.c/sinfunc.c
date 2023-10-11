#include<stdio.h>
#include<math.h> 
int main(){
  double sinValue, x;
  printf(" Please Enter the Value to calculate Sine :  ");
  scanf("%lf", &x);    
     if(x>=0 && x<1){
        sinValue = sin(x);
     printf("\n The Sine value of %lf = %f ", x, sinValue);
     }
     else{
     printf("Oops!The value you entered is greater than 1, Please enter a value between 0 and 1.");
     }
  return 0;
}