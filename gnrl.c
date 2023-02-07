#include<stdio.h>
int main(){
    int qty;
    int dis;
    float price;
    printf("enter price and qty");
    scanf("%f%d",&price,&qty);
    if(qty>1000){
        dis=10;
      
        

    }
    else{
        dis=0;
        printf("htt mc");
    }
     printf("exp %.2f",qty*price-qty*price*dis/100); 
    
    
    return 0;
    

}