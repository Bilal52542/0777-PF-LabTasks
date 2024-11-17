#include <stdio.h>
#include <string.h>
void printallelements(int array[],int n,int i){
    if(i>=n){
        return;
    }else{
        printf("Element #%d is %d\n",i,array[i]);
        i++;
        printallelements(array,n,i);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int i=0;
    printallelements(array,n,i);
return 0;
}

