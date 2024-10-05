#include<stdio.h>
int main(){
	int num,check=1;
	int fib=1,fib1=0,fib2=1,count=2;
	
	printf("Enter any number ");
	scanf("%d",&num);
	
	for(int i=2;i<num;i++){
	if(num%i==0){
		check=0;
		break;
		}
	}
	
	if(check!=0){
		printf("%d is a prime number\n",num);
		printf("Fibonacci sequence is 0 %d ",fib);
		while(count!=num){
			fib=fib1+fib2;
			printf("%d ",fib);
			fib1=fib2;
			fib2=fib;
			count+=1;
		}
	}
	else printf("%d is not a prime number",num);
	
return 0;
}

