/*
que4.number is divisible by 3 and 5 or not .

ans: Enter any number:15
This number is divisible by both numbers

*/

#include<stdio.h>

void main(){
	int num;
	
	printf("Enter any number:");
	scanf("%d",&num);
	
	if(num%3==0 && num%5==0)
	{
		printf("This number is divisible by both numbers...");
	}else{
		printf("This number is not divisible by both...");
	}
	
}
