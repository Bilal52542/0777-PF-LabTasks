#include<stdio.h>
int main(){
	int array[12];
	int array2[6];
	
	//from Question 2
	//print for input for array
	int i;
	for(i=0;i<12;i++){
		printf("Enter array element %d: ",i+1);
		scanf("%d",&array[i]);
	}

	//print array as is
	int j;
	printf("Array was {");
	for(j=0;j<12;j++){
		printf(" %d",array[j]);
		if(j<11)
		printf(",");	
	}
	printf(" }\n");
	
	//add elements of 12 array and print new array
	int k,l=0;
	printf("Sum Array is {");
	for(k=0;k<6;k++,l+=2){
		array2[k]=array[l]+array[l+1];
		printf(" %d",array2[k]);
		if(k<5)
		printf(",");
	}
	printf(" }\n");
return 0;
}

