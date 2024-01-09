/*
Que5:Uses pointers to find Sum of two 1D array .

ans:Enter size of array:2
Enter elements of A:
Enter a[0]:1
Enter a[1]:3
Enter elements of b:
Enter a[0]:4
Enter a[1]:4
Sum of two 1D array is :
5 7
------
*/

#include<stdio.h>
void main(){
	int n,i,j;
	
	printf("Enter size of array:");
	scanf("%d",&n);
	
	
	int a[n],b[n],c[n];
	
	printf("Enter elements of A:\n");
	for(i=0;i<n;i++){
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter elements of b:\n");
	for(i=0;i<n;i++){
		printf("Enter a[%d]:",i);
		scanf("%d",&b[i]);
	}

    int *ptr[n];
   
	for(i=0;i<n;i++){
		c[i]=a[i]+b[i];
	    ptr[i]=&c[i];
	}
	 
	printf("Sum of two 1D array is :\n");
	
	for(i=0;i<n;i++){
		printf("%d ",*ptr[i]);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
}
