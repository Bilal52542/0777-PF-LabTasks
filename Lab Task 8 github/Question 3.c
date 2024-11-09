#include<stdio.h>
int main(){
	int n;
	printf("enter N : ");
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(k=n-i;k>0;k--){
			printf("%d ",k);
		}
		printf("\n");
	}
	for(k=1;k<=n;k++){
		if(k==1){
			continue;
		}
		for(j=0;j<n-k;j++){
			printf(" ");
		}
		for(j=k;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
return 0;
}
