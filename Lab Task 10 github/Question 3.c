#include <stdio.h>
#include <string.h>
struct cars{
    char make[50],model[50];
    int year,price,mileage;
};
int main(){
    struct cars car[10];
    for(int i=0;i<10;i++){
    	strcpy(car[i].make, "");
        strcpy(car[i].model, "");
        car[i].year=0;
        car[i].price=0;
        car[i].mileage=0;
    }
    while(1){
        printf("\n1. Add new cars\n");
        printf("2. Display cars\n");
        printf("3. Search cars\n");
        printf("4. Exit\n\n");
        int choice,choice2;
        scanf("%d",&choice);
        if(choice==1){
            int numberofCars;
            printf("How many cars you want to add?\n");
            scanf("%d",&numberofCars);
                for(int i=0;i<numberofCars;i++){
                    for(int j=0;j<10;j++){
                        if(car[j].year==0){
                            printf("\nEnter car make: ");
                            scanf("%s", car[i].make);
                            printf("Enter car model: ");
                            scanf("%s", car[i].model);
                            printf("Enter car year: ");
                            scanf("%d", &car[i].year);
                            printf("Enter car price: ");
                            scanf("%d", &car[i].price);
                            printf("Enter car mileage: ");
                            scanf("%d", &car[i].mileage);
                            break;
                        }
                    }    
                 }
        }else if(choice==2){
            for(int i=0;i<10;i++){
                if(car[i].year!=0){
                    printf("make: %s, model: %s, year: %d, price: %d, mileage: %d\n",car[i].make,car[i].model,car[i].year,car[i].price,car[i].mileage);
                }else{
                    printf("No More Cars To Display\n");
                    break;
                }
            }
        }else if(choice==3){
            //search cars
            printf("1. Search  by make\n");
            printf("2. Search  by model\n");
            scanf("%d",&choice2);
            if(choice2==1){
                char searchbymake[50];
                printf("Enter car make: ");
                scanf("%s",&searchbymake);
                for(int k=0;k<10;k++){
                    if(strcmp(car[k].make,searchbymake)==0){
                        printf("make: %s, model: %s, year: %d, price: %d, mileage: %d\n",car[k].make,car[k].model,car[k].year,car[k].price,car[k].mileage);
                    }
                }
            }else if(choice2==2){
                char searchbymodel[50];
                printf("Enter car model: ");
                scanf("%s",&searchbymodel);
                for(int k=0;k<10;k++){
                    if(strcmp(car[k].model,searchbymodel)==0){
                        printf("make: %s, model: %s, year: %d, price: %d, mileage: %d\n",car[k].make,car[k].model,car[k].year,car[k].price,car[k].mileage);
                    }
                }
            }
        }else{
            printf("PROCESS EXITED");
            return 0;
        }
    }
   
return 0;
}

