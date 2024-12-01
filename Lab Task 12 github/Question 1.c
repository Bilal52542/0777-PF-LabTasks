#include<stdio.h>
#include<stdlib.h>
int main(){
	int numStudents;
	printf("Enter the number of students: ");
	scanf("%d",&numStudents);
	
	int **students= (int **)malloc(numStudents * sizeof(int *));
    if(students==NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }
    int *numGrades= (int *)malloc(numStudents * sizeof(int));
    if(numGrades==NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }
	
	for(int i=0;i<numStudents;i++){
		printf("Enter the number of grades for student %d: ",i+1);
		scanf("%d",&numGrades[i]);
		students[i]= (int *)malloc(numGrades[i]*sizeof(int));
		printf("Enter grades for student %d:\n",i+1);
		for(int j=0;j<numGrades[i];j++){
			printf("  Grade %d: ",j+1);
			scanf("%d",&students[i][j]);
		}
	}
	
	printf("Entered Grades:");
	for(int i=0;i<numStudents;i++){
		printf("\nStudent %d Grades: ",i+1);
		for(int j=0;j< numGrades[i];j++){
			printf("%d ",students[i][j]);
		}
	}
	
	for (int i = 0; i < numStudents; i++) {
        free(students[i]);
    }
    free(students);
    free(numGrades);
return 0;
}

