#include<stdio.h>
int main(){
	int num;
	int counter=0;
	
	printf("Write your number\n");
	scanf("%d",&num);
	
	if(num & 1)	counter+=1;
	num=num>>1;
	if(num & 1) counter+=1;
	num=num>>1;
	if(num & 1) counter+=1;
	num=num>>1;
	if(num & 1) counter+=1;
	num=num>>1;
	if(num & 1) counter+=1;
	num=num>>1;
					
	printf("Number of 1s in binary representation is: %d", counter);
return 0;
}

