#include<stdio.h>
int main(){
	int num,check=1;
	
	printf("Enter any number ");
	scanf("%d",&num);
	
	for(int i=2;i<num;i++){
	if(num%i==0){
		check=0;
		break;
		}
	}
	
	if(check!=0){
	printf("%d is a prime number",num);
	}
	else printf("%d is not a prime number",num);
	
return 0;
}

