#include<stdio.h>
int main(){
	int mat[3][3];
	int i=0,j=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&mat[i][j]);
		}
	}

	int row1=0,row2=0,row3=0;
	int col1=0,col2=0,col3=0;
	int k=0,l=0;
	for(k=0;k<3;k++){
		row1+=mat[0][k];
		row2+=mat[1][k];
		row3+=mat[2][k];
		col1+=mat[k][0];
		col2+=mat[k][1];
		col3+=mat[k][2];
	}	

	printf("Matrix is \n");
	int q=0,r=0;
	for (q= 0; q < 3; q++) {
		for ( r= 0; r < 3; r++) {
				printf("%d ", mat[q][r]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Sum of rows ");
	printf("%d %d %d\n",row1,row2,row3);
	printf("Sum of columns ");
	printf("%d %d %d\n",col1,col2,col3);
	
return 0;	
}

