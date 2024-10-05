#include<stdio.h>
int main(){
	int num,evennums=2;
	
	printf("Type your number : ");
	scanf("%d",&num);
	
	if(num>=1){
		while(evennums<=num){
			printf("%d ",evennums);
			evennums+=2;
		}
	}
	else printf("Number is not greater than or equal to 1");

return 0;
}

