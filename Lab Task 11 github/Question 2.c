#include <stdio.h>
int main(){
	FILE *file;
	char line[300];
	
	file = fopen("question2.txt","r");
	if(file==NULL){
		printf("Error in opening file");
		return 1;	
	}
	
	
	int lineNumber = 1;
    while (fgets(line, sizeof(line), file)) {
        printf("%d. %s", lineNumber, line);
        lineNumber++;
	}
	fclose(file);
	
return 0;																																																			
}
