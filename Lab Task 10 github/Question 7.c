#include<stdio.h>
void bubblesorter(int array[],int size,int j){
	if(j==size-1) return;
	
	for(int i=0;i<size-1;i++){
		if(array[i]>array[i+1]){
			int temp=array[i+1];
			array[i+1]=array[i];
			array[i]=temp;
		}
	}
	bubblesorter(array,size,j+1);
}
int main(){
	int size;
	printf("Enter size of the array : ");
	scanf("%d",&size);
	
	int array[size];
	printf("Enter array elements : ");
	for(int i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	
	bubblesorter(array,size,0);
	
	printf("Sorted array : ");
    for(int i=0;i<size;i++){
        printf("%d ", array[i]);
    }
    printf("\n");
return 0;
}

