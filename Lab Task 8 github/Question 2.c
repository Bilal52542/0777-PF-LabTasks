#include<stdio.h>
int main(){
	int mat[4][4];
	int i=0,j=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
				printf("Matrix [%d][%d]",i,j);
				scanf("%d",&mat[i][j]);
				if(mat[i][j]<0){
					mat[i][j]=0;
				}
		}
	}
	
	printf("\n");
	printf("Matrix is \n");
	int k=0,l=0;
	for (k= 0; k < 4; k++) {
		for ( l= 0; l < 4; l++) {
				printf("%d ", mat[k][l]);
		}
		printf("\n");
	}
return 0;
}

