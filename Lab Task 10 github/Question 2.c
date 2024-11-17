#include <stdio.h>
void splitpercentage(int number,int *i){
    if(*i>100){
        return;
    }else{
        float percent;
    percent=(number*(*i))/100;
    printf("%d Percent=%.2f\n",*i,percent);
    (*i)++;
    }
    splitpercentage(number,i);
}
int main(){
    printf("Enter a value to split in precentage: ");
    int number;
    scanf("%d",&number);
    int i=1;
    splitpercentage(number,&i);
return 0;
}

