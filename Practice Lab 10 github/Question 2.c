#include<stdio.h>
int maxfinder(int length,int i){
	if(length%i==0){
		return length/i;
	}
	length--;
	maxfinder(length,i);
}
int main(){
	int length;
	printf("Enter Length : ");
	scanf("%d",&length);
	int i=3,newlength;
	newlength=maxfinder(length,i);
	printf("Maximum number of %d length ropes are %d\n",i,newlength);
	i--;
	newlength=maxfinder(length,i);
	printf("Maximum number of %d length ropes are %d\n",i,newlength);
	i--;
	newlength=maxfinder(length,i);
	printf("Maximum number of %d length ropes are %d",i,newlength);
return 0;
}
