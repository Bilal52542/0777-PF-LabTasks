#include<stdio.h>
int main(){
	int i,j,sum=0;
	int array[15];
		
	for(i=1; i<=15; i++){
		printf("Enter number %d: ",i);
		scanf("%d",&array[i-1]);	
	}
	printf("Input is ");
	for(j=0;j<15;j++){
		sum= sum + array[j];
		printf("%d ",array[j]);
	}
	printf("\nSum of elements is %d ",sum);
	
	
return 0;
}

