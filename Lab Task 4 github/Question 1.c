#include <stdio.h>
int main(){
	int marks;
	 printf("Please enter your marks:\n");
	 scanf("%d",&marks);
	 if(marks<0 || marks>100){
	 	printf("Marks are invalid");
	 }
	 	 else if(marks>=90){
	 	printf("Grade is A");
	 }
	 else if(marks<90 && marks>=80){
	 	printf("Grade is B");
	 }
	 else if(marks<80 && marks>=70){
	 	printf("Grade is C");
	 }
	 else if(marks<70 && marks>=60){
	 	printf("Grade is D");
	 }
	 else if(marks<60){
	 	printf("Grade is F");
	 }
return 0;
}



