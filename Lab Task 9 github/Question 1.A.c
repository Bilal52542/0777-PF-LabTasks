#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		for(int j=0;j<n+2;j++){
			if(j<n-i+1){
				printf(". ");
			}else{
				printf("o");
			}
		}
		printf("\n");
	}
	for(int i=0;i<n;i++){
		for(int j=n+2;j>0;j--){
			if(j<n-i+1){
				printf("o");
			}else{
				printf(". ");
			}
		}
		printf("\n");
	}
return 0;
}
