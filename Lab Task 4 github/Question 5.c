#include<stdio.h>
int main(){
	int time;
	printf("What is the time as an integer e.g 6:43 is 643\n Write time in 24 hour format \n");
	scanf("%d", &time);
	if(time<0 || time>2400){
		printf("Invalid input");
	}
	else
		if(time>=600 && time<1200){
		printf("Good Morning");
	}
	else 
		if(time>=1200 && time<1800)
		printf("Good Afternoon");
		else
			if(time>=1800 && time<2400)
			printf("Good Evening");
			else
				if(time>=0 && time<600)
				printf("Good Night");
return 0;
}
