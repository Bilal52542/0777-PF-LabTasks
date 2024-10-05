//do while loop would be best
#include<stdio.h>
int main(){
	int added=0,num;
	
	printf("Enter any number ");
	scanf("%d",&num);

	do{
		added+=num;
		printf("Current sum is : %d\n", added);
		printf("Enter any number ");
		scanf("%d",&num);
		
	}while(num!=0);
	printf("Process exited.");
	
return 0;
}

