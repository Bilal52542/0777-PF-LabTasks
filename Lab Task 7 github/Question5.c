#include<stdio.h>
int main(){
	int i,j,k;
	int array[20];

	for(i=1; i<=20; i++){
		printf("Enter number %d ",i);
		scanf("%d",&array[i-1]);	
	}//input array elements
	
	printf("Input is ");
	for(j=0;j<20;j++){
		printf("%d ",array[j]);
	}//print array elements as is
	
	printf("\nReverse order is ");
	for(k=20;k>0;k--){
		printf("%d ",array[k-1]);
		//k-1 since 3rd number would be 2nd element in array
	}//print array elements in reverse
	
return 0;
}

