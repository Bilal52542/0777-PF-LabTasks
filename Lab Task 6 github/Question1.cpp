#include<stdio.h>
int main(){
	int fact=1,num;
	
	printf("Write the number for which you want factorial : ");
	scanf("%d",&num);
	
	if(num>0){
		for(int i=num; i>0; i--){
		fact=fact*i;
		}
		printf("Factorial is %d",fact);
	}
	else printf("Number input cannot be negative");


return 0;
}

