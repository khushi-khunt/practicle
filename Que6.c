/*
Que6. structure to represent a mobile(attributes like color,model,price).
ans:Enter any number:1
company-name:xiomi
mobile-color:black
mobile-price:25000
model:redmi-note-12

name of company xiomi:
color of mobileblack:
price of mobile808465714:
model of mobileredmi-note-12:
*/
#include<stdio.h>
  
  struct mobile{
  	char comp_name[50];
  	char color[10];
  	int  price;
  	char model[30];
  };
  
  void main(){
  	struct mobile m1;
  	int n,i;
  	
  	printf("Enter any number:");
  	scanf("%d",&n);
  	
  	int m[n];
  	
  	for(i=1;i<=n;i++)
	  {
  		printf("company-name:");
  		scanf("%s",&m1.comp_name);
  		printf("mobile-color:");
  		scanf("%s",&m1.color);
  		printf("mobile-price:");
  		scanf("%s",&m1.price);
  		printf("model:");
  		scanf("%s",&m1.model);
  		}
  		
  		printf("\n");
  		
  		for(i=1;i<=n;i++){
  			printf("name of company %s:\n",m1.comp_name);
  			printf("color of mobile%s:\n",m1.color);
  			printf("price of mobile%d:\n",m1.price);
  			printf("model of mobile%s:\n",m1.model);
  			
		  }
  	
  }

