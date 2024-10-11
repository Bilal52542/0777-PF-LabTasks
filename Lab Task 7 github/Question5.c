#include<stdio.h>
int main(){
	int num,i,j,k;
	int array[num];
	
	printf("Enter amount of numbers to be input ");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++){
		printf("Enter number %d ",i);
		scanf("%d",&array[i-1]);	
	}//input array elements
	
	printf("Input is ");
	for(j=0;j<num;j++){
		printf("%d ",array[j]);
	}//print array elements as is
	
	printf("\nReverse order is ");
	for(k=num;k>0;k--){
		printf("%d ",array[k-1]);
		//k-1 since 3rd number is actually 2nd element in array
	}//print array elements in reverse
	
return 0;
}

