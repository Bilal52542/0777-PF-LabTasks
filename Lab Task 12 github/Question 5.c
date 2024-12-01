#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void insert(int **array,int *size,int *capacity,int value,int position){
    if(*size==*capacity){
        *capacity*=2;
        *array=realloc(*array,(*capacity)*sizeof(int));
    }
    for(int i=*size;i>=position;i--)(*array)[i]=(*array)[i-1];
    (*array)[position-1]=value;
    (*size)++;
}

void delete(int *array,int *size,int position){
    for(int i=position-1;i<*size-1;i++)array[i]=array[i+1];
    (*size)--;
}

void TestCase(){
    int N,capacity,size;
    scanf("%d",&N);
    capacity=N;
    size=N;
    int *array=malloc(capacity*sizeof(int));
    for(int i=0;i<N;i++)scanf("%d",&array[i]);
    char operation[10];
    while(scanf("%s",operation)&&strcmp(operation,"END")!=0){
        if(operation[0]=='I'){
            int value,position;
            scanf("%d%d",&value,&position);
            insert(&array,&size,&capacity,value,position);
        }else if(operation[0]=='D'){
            int position;
            scanf("%d",&position);
            delete(array,&size,position);
        }
    }
    for(int i=0;i<size;i++){
        if(i>0)printf(" ");
        printf("%d",array[i]);
    }
    printf("\n");
    free(array);
}

int main(){
    int T;
    scanf("%d",&T);
    for(int t=0;t<T;t++)TestCase();
    return 0;
}

