/*
pattern:
109876
  9876
   876
    76
     6

*/
#include<stdio.h>

void main(){
	int i,j,s;

  for(i=10;i>=6;i--){
  	for(s=10;s>i;s--){
  		printf(" ");
	  }
      for(j=i;j>=6;j--){
  		printf("%d",j);
	  }
	  printf("\n");
  }
}
