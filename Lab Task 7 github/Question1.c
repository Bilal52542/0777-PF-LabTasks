#include<stdio.h>
int main(){
	int array[]={1,2,3,4,5,6,5,8,9,14,55,31,1234};
	int num,random=0;
	
	printf("\nEnter number to be searched : ");
	scanf("%d",&num);
	
	int i;
	printf("Array is {");
	for(i=0;i<13;i++){
		printf(" %d",array[i]);
		if(i<12)
		printf(",");	
	}
	printf("}\n");
	
	int j;
	for(j=0;j<13;j++){
		if(num==array[j]){
			printf("%d is found at index %d",num,j+1);
			//j+1 since humans start counting from 1 not 0
			random=1; 
			break;
		}
	}
	if(random!=1)
	printf("Number is not found.");
	
return 0;
}

