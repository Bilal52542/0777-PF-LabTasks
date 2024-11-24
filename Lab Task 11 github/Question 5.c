#include<stdio.h>
struct phone_number{
	int area_code,exchange,number;
};
int main(){
	struct phone_number my_number={415,555,1212};
	struct phone_number your_number;
	
	printf("\nEnter area code : ");
	scanf("%d",&your_number.area_code);
	printf("\nEnter exchange : ");
	scanf("%d",&your_number.exchange);
	printf("\nEnter number : ");
	scanf("%d",&your_number.number);
	printf("\nMy number is (%d) %d-%d ",my_number.area_code,my_number.exchange,my_number.number);
	printf("\nYour number is (%d) %d-%d ",your_number.area_code,your_number.exchange,your_number.number);
return 0;
}

