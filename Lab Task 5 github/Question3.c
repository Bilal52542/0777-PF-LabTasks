#include<stdio.h>
int main(){
	float perc;
	printf("What is your percentage ");
	scanf("%f",&perc);
	(perc<60)? printf("Grade is F"): 
		(perc>=60 && perc<70)? printf("Grade is D"):
			(perc>=70 && perc<80)? printf("Grade is C"):
				(perc>=80 && perc<90)? printf("Grade is B"): printf("Grade is A");
return 0;
}

