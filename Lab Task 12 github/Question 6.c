#include<stdio.h>
#include<stdlib.h>
int main(){
	int totalValues,*values;
	printf("Enter total number of values (ranging from 1 to 100) : ");
	scanf("%d",&totalValues);
	if(totalValues<1 || totalValues>100){
		printf("Invalid answer!");
		return 1;
	}
	
	values= malloc(totalValues*sizeof(int));
	if(values==NULL){
        printf("Memory allocation has failed.\n");
        return 1;
    }
    
	for(int i=0;i<totalValues;i++){
		printf("Enter value %d: ",i+1);
		scanf("%d",&values[i]);
	}
	
	int largest=values[0];
    for(int i=1;i<totalValues;i++){
        if(values[i]>largest){
            largest=values[i];
        }
    }
    printf("The largest value is: %d\n", largest);
    
    free(values);
return 0;
}

