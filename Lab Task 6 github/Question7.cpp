#include<stdio.h>
int main(){
	//check if number is armstrong
	//123 is armstrong if 123=1^3+2^3+3^3
	int num,sum=0,digit,armcheck;
	
	printf("Enter your number : ");
	scanf("%d",&num);
	armcheck=num;
	
	while(num!=0){
		digit=num%10;
		sum=sum+(digit*digit*digit);
		num=num/10;
	}
	if(armcheck==sum){
		printf("%d is an Armstrong Number.",armcheck);
	}
	else printf("%d is not an Armstrong Number",armcheck);
return 0;
}

