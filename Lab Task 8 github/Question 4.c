#include<stdio.h>
int main(){
	int m,n;
	printf("Enter dimensions m & n : ");
	scanf("%d %d",&m,&n);
	int matrix1[m][n],matrix2[m][n],result[m][n];
	
	printf("Enter values for Matrix 1\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&matrix1[i][j]);	
		}
	}
	
	printf("Enter values for Matrix 2\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&matrix2[i][j]);	
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			result[i][j]=matrix1[i][j] + matrix2[i][j];
		}
	}
	
	printf("Sum of two matrixes:\n");
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			printf("%d ",result[i][j]);
		}
	printf("\n");
	}
return 0;
}

