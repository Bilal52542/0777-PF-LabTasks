#include<stdio.h>
#include<stdlib.h>

int main(){
    int totalPoints;
    float *fees,totalProfit=0.0;

    printf("Enter the total number of points in the facility: ");
    scanf("%d",&totalPoints);

    if(totalPoints<1){
        printf("Invalid number!\n");
        return 1;
    }

    fees=malloc(totalPoints*sizeof(float));
    if(fees==NULL){
        printf("Memory allocation has failed.\n");
        return 1;
    }

    for(int i=0;i<totalPoints;i++){
        float fee;
        do{
            printf("Enter the fee for point %d: $",i+1);
            scanf("%f",&fee);
            if(fee<0){
                printf("Fee cannot be negative.\n");
            }
        }while(fee<0);
        fees[i]=fee;
        totalProfit+=fees[i];
    }

    printf("Total Profit for the Facility: $%.2f\n",totalProfit);

    free(fees);
return 0;
}

