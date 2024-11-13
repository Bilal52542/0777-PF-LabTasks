#include<stdio.h>
#include<string.h>
int main(){
	char names[5][20] = {
	        "Ali",
	        "Ayesha",
	        "Hassan",
	        "Fatima",
	        "Imran"
	    };
	printf("Enter a name to search: ");
	char input[50];
	scanf("%s",input);
	int found=0;
	for(int i=0;i<5;i++){
		if(strcmp(names[i],input)==0){
			found=1;
		}
	}
	if(found){
		printf("Found.");
	}else if(!found){
		printf("Not Found.");
	}
return 0;
}

