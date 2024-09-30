#include<stdio.h>
int main(){
	float cost,final_cost;
	printf("Input current cost : ");
	scanf("%f",&cost);
	printf("Original amount is %f \n",cost);
	if (cost<1500){
		printf("Discount is %f \n", cost*0.07);
		final_cost=cost-(cost*0.07);
	}
	else 
		{
		if(cost<=3000 && cost>=1500){
		printf("Discount is %f \n", cost*0.12);
		final_cost=cost-(cost*0.12);
	}
		else 
			if(cost<=5000 && cost>3000){
		printf("Discount is %f \n", cost*0.22);
		final_cost=cost-(cost*0.22);
	}
		else 
			if(cost>5000){
			printf("Discount is %f \n", cost*0.3);
		final_cost=cost-(cost*0.3);
	}
	}
	printf("Final amount is %f \n",final_cost);
	return 0;
}

