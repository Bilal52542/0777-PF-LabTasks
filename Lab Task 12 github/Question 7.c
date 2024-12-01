#include<stdio.h>
#include<stdlib.h>
int main(){
    int rows,cols;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    printf("Enter the number of columns:");
    scanf("%d",&cols);

    int **array=malloc(rows*sizeof(int*));
    if(array==NULL){
        printf("Memory allocation has failed.\n");
        return 1;
    }

    for(int i=0;i<rows;i++){
        array[i]=malloc(cols*sizeof(int));
        if(array[i]==NULL){
            printf("Memory allocation has failed.\n");
            for(int j=0;j<i;j++){
                free(array[j]);
            }
            free(array);
            return 1;
        }
    }

    printf("Enter the values for the 2D array:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("Value for [%d][%d]:",i,j);
            scanf("%d",&array[i][j]);
        }
    }

    int changeRow,changeCol,newValue;
    printf("Enter the row and column to modify:");
    scanf("%d %d",&changeRow,&changeCol);
    printf("Enter the new value:");
    scanf("%d",&newValue);
    array[changeRow][changeCol]=newValue;

    printf("New 2D Array:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<rows;i++){
        free(array[i]);
    }
    free(array);

return 0;
}

