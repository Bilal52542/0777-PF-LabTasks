#include<stdio.h>
int main(){
	int matrix[4][4];
	printf("Write scores of teams : \n");
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	
	for(int i=0;i<4;i++){//go through rows
		for(int j=0;j<4;j++){//go through columns
			for(int k=0;k<4-i-1;k++){//check every 2 input in columns
				if(matrix[k][j]>matrix[k+1][j]){
					int temp=matrix[k][j];
					matrix[k][j]=matrix[k+1][j];
					matrix[k+1][j]=temp;
				}
			}
		}
	}
	
	printf("Matrix after sorting : \n");
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%d ",matrix[i][j]);
		}
	printf("\n");
	}
return 0;
}

