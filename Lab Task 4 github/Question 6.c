#include<stdio.h>
int main(){
	int num1,num2;
	printf("Input first number \n");
	scanf("%d",&num1);
	printf("Input second number \n");
	scanf("%d",&num2);
	if (num1>num2){
		if (num1>100)
		printf("First number is significantly larger");
		else
		printf("First number is larger");
	}
	if (num1<num2){
		if(num1<0)
			printf("First number is negative and smaller");
		else
		printf("First number is smaller");
	}
	if (num1==num2){
		printf("Both numbers are equal");
	}
return 0;
}
