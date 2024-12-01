#include<stdio.h>
#include<stdlib.h>
void Even(int *array,int size){
	for(int i=0;i<size;i++){
		if(*(array+i)%2!=0){
			*(array+i)-=1;
		}
	}
}
int main(){
	int *array,size;
	printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    array= malloc(size * sizeof(int));
    if(array==NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter elements:\n");
    for(int i=0;i<size;i++){
        scanf("%d", &array[i]);
    }
    
    Even(array, size);
    printf("Array : ");
    for(int i=0;i<size;i++){
    	printf("%d ",array[i]);
	}
return 0;
}

