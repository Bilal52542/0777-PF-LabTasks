#include<stdio.h>
int Sumofdigits(int number){
	if(number==0){
		return 0;
	}else{
		int sum=(number%10+Sumofdigits(number/10));
		return sum;
	}
}
int main(){
	int number,finalsum;
	printf("Enter number : ");
	scanf("%d",&number);
	finalsum=Sumofdigits(number);
	printf("Sum of all digits in %d is %d",number,finalsum);
return 0;
}

