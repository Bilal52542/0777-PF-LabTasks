#include<stdio.h>
int main(){
	int num;
	
	printf("Enter any positive number : ");
	scanf("%d", &num);
	
	do{
		printf("Wrong number\n");
		
		printf("Enter any positive number : ");
		scanf("%d", &num);
		
		if(num>=0){
			printf("Good job");
		}
		
	}while(num<=0);
	
return 0;
}

