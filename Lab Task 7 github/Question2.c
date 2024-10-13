#include<stdio.h>
int main(){
	int array[10];
	int firstNum;
	
	//print for input for array
	int i;
	for(i=0;i<10;i++){
		printf("Enter array element %d: ",i+1);
		scanf("%d",&array[i]);
	}
	firstNum=array[0];
	
	//print array as is
	int j;
	printf("Array was {");
	for(j=0;j<10;j++){
		printf(" %d",array[j]);
		if(j<9)
		printf(",");	
	}
	printf(" }\n");
	
	//print new array
	int k;
	printf("New Array is {");
	for(k=0;k<10;k++){
		array[10]=firstNum;
		if(k>0){
			array[k-1]=array[k];
			printf(" %d",array[k]);
			if(k<9)
			printf(",");
		}
		
	}
	printf(", %d",array[10]);
	printf(" }");
	
return 0;
}

