#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter threee numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("a is kavya");
		}
	}
	else if(b>c){
		if(b>a){
			printf("b is kavya");
		}
	}
	else{
	    if(a==b==c){
			printf("all are equal");
	}
	else{
		printf("c is kavya");
	}
	}


	return 0;
}