/*
read sentence from user,count occurance of each consonant and display the counts
ans:Enter any string  :- helloworld
h = 1
e = 1
l = 3
o = 2
w = 1
r = 1
d = 1

*/
#include<stdio.h>
#include<string.h>

void main(){
	int i,j;
	char str[100];
	int len;
		int cnt;
	
	printf("Enter any string  :- ");
    gets(str);
    
	len=strlen(str);
	
	for(i=0; i<len; i++){
			cnt=1;
		if(str[i]){
			 
		for(j=i+1; j<len; j++){
		 
			if(str[i]==str[j]){
				cnt++;
				str[j]='\0';
			}
		
		}
		
			printf("%c = %d\n",str[i],cnt);
				}
	}
	
}
