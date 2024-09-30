/*if last bit of number if 1 it cant be even 
even no. end with 0 odd no. with 1*/
#include<stdio.h>
int main(){
	int num;
	printf("Enter the number ");
	scanf("%d",&num);
	if(num & 1){                  
		printf("Number is odd");
	}
	else printf("Number is even");
return 0;
}

