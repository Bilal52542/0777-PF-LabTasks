#include<stdio.h>
#include<string.h>
int main(){
	char actualusername[]={"admin"},username[50];
	char actualpass[]={"1234"},pass[50];
	
	printf("Enter Username: ");
	scanf("%s",&username);
	printf("Enter Password: ");
	scanf("%s",pass);
	
	if(strcmp(actualusername,username)==0){
		if(strcmp(actualpass,pass)==0){
			printf("Access Granted.");
			return 0;
		}
	}
	printf("Access Denied.");

return 0;
}

