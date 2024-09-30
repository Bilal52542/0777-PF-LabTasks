#include<stdio.h>
int main(){
	int age,status;
	printf("Are you from Pakistan: 1 for yes, 2 for no ");
	scanf("%d",&status);
	if (status==1){
		printf("Enter your age ");
		scanf("%d",&age);
		if (age>=18){
			printf("You are eligible to vote");
	}
	else printf("You are not eligible to vote");
	}
	else printf("You are not eligible to vote");
return 0;
}

