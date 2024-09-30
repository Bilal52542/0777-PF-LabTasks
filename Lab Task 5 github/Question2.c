#include<stdio.h>
int main(){
	float a,b,c,sum;
	printf("Enter all three angles one by one of the triangle ");
	scanf("%f%f%f",&a,&b,&c);
	if (a>0 && b>0 && c>0){
			sum=a+b+c;
			if (sum==180){
				printf("It is a triangle");
			}
			else printf("It is not a triangle");
	}
	else printf("Invalid angles");
return 0;
}

