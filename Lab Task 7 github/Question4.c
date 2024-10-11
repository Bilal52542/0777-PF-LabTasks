#include<stdio.h>
int main(){
	int num,i,j,sum=0;
	int array[num];
	
	printf("Enter amount of numbers to be input ");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++){
		printf("Enter number %d ",i);
		scanf("%d",&array[i-1]);	
	}
	printf("Input is ");
	for(j=0;j<num;j++){
		sum= sum + array[j];
		printf("%d ",array[j]);
	}
	printf("\nSum of elements is %d ",sum);
	
return 0;
}
