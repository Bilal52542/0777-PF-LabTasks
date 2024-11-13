#include<stdio.h>
int main(){
	int priceN=3,priceB=5,priceW=1,numN,numB,numW;
	printf("Enter number of bolts:		");
	scanf("%d",&numB);
	printf("Enter number of nuts:		");
	scanf("%d",&numN);
	printf("Enter number of washers:	");
	scanf("%d",&numW);
	
	printf("Check The Order: ");
	if(numN<2*numB){
		printf("		Too Few Nuts");	
	}else if(numW<2*numB){
		printf("		Too Few Washers");
	}else{
		printf("		Order is OK");
	}
	int cost=(numN*priceN)+(numB*priceB)+(numW*priceW);
	printf("\nTotal Cost:			%d",cost);
return 0;
}

