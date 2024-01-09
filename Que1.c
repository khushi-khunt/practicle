/*
que1:- Sum of first and last digits.

ans:Enter any number:142
Sum of first and last digits is 3
*/
#include<stdio.h>

void main(){
	int a,b,num;
	
	printf("Enter any number:");
	scanf("%d",&num);
	
	a=num%10;
   
	while(num>10){
	num=num/10;
    b=num;
	}
		printf("Sum of first and last digits is %d",a+b);
}
