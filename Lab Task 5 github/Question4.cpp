#include <stdio.h>
int main(){
	int discount,price, membership;
	printf("What is your purchase amount");
	scanf("%d",&price);
	printf("Do you have a membership: 1 for yes and 2 for no");
	scanf("%d",&membership);
	(membership==1 && price>100)? printf("You are eligible for discount"):
		printf("You are not eligble for discount");
return 0;
}

