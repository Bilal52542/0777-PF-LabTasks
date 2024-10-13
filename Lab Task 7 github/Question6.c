#include<stdio.h>
int main(){
	int num;

	printf("Enter amount of numbers to be input ");
	scanf("%d",&num);
	
	int i,j,h;
	int array[num];
	
	for(i=0; i<num; i++){
		printf("Enter number %d ",i+1);
		scanf("%d",&array[i]);	
	}//input array elements
	
	printf("Input is ");
	for(j=0;j<num;j++){
		printf("%d ",array[j]);
	}//print array elements as is
	
	int max=array[0],min=array[0];
	for(h=0;h<num;h++){
		if(max<=array[h]){
			max=array[h];
		}
		if(min>=array[h]){
			min=array[h];
		}
	}
	
	printf("\nMaximum number is %d",max);
	printf("\nMinimum number is %d",min);	
return 0;
}

