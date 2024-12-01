#include<stdio.h>
#include<stdlib.h>

void display(float *array, int size) {
    printf("Current numbers in the array: ");
    for(int i=0;i<size;i++){
        printf("%.2f ", array[i]);
    }
    printf("\n");
}

int main() {
    float *array;
    int capacity=4;
    int size=0;
    float num;
	array= (float *)malloc(capacity * sizeof(float));
    if(array==NULL){
        printf("Memory allocation has failed!\n");
        return 1;
    }

    while(1){
        int choice;
        printf("Menu:\n");
        printf("1. Add a new number\n");
        printf("2. Display all numbers\n");
        printf("3. Remove the last number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                if(size==capacity){
                    capacity*=2;
                    array=(float *)realloc(array, capacity * sizeof(float));
                    if(array==NULL){
                        printf("Memory reallocation has failed!\n");
                        return 1;
                    }
                    printf("Array resized to %d elements.\n", capacity);
                }
                printf("Enter a float number: ");
                scanf("%f", &num);
                array[size++]=num;
                break;

            case 2:
                if(size==0){
                    printf("Array is empty.\n");
                }else{
                    display(array, size);
                }
                break;

            case 3:
                if(size>0){
                    size--;
                    printf("Last number removed.\n");
                }else{
                    printf("Array is empty.\n");
                }
                break;

            case 4:
                free(array);
                printf("Memory freed. Program Exited\n");
                return 0;
                
            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}

