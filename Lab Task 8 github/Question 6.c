#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	if(num>=0){
		for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			if(i==0 || j==0 || i==(num-1) || j==(num-1)){
				//border exist where i and j are 0
				// or where i and j are maximum
				printf("*");
			}else if(i==j || i+j==(num-1)){
				//diagnoal exist where i=j
				// or where i and j are both maximum
				printf("*");
			}else printf(" ");
		}
		printf("\n");
	}
	}else{
		printf("Invalid input");
		return 0;
	}	
return 0;
}

