#include<stdio.h>
int main() {
	float total_bill=0;
	int units;
	printf("What is the number of units : ");
	scanf("%d", &units);
	if (units<=30){
		total_bill+=0.6*units;
	}
	else{
		units-=30;
		total_bill+=0.6*30;
			
		if (units<=80){
			total_bill+=0.85*units;
		}
		else{
			units-=80;
			total_bill+=0.85*80;
			
			if (units<=100){
				total_bill+=1.30*units;
			}
			else{
				units-=100;
				total_bill+=1.30*100;	
				if (units>0){
					total_bill+=1.60*units;
				}
			}
		}
	}
	total_bill*=1.15;
	printf("Total bill is : %f", total_bill);
	return 0;	
}
	
