#include<stdio.h>
struct Invoice{
	char part_number[50],part_description[50];
	int quantity;
	float price_per_item;
};
int main(){
	struct Invoice sale={"","",0,0};
	float invoice_amount;
	
	printf("\nEnter part number : ");
	fgets(sale.part_number,50,stdin);
	printf("\nEnter part description : ");
	fgets(sale.part_description,50,stdin);
	printf("\nEnter quantity : ");
	scanf("%d",&sale.quantity);
	printf("\nEnter price per item : ");
	scanf("%f",&sale.price_per_item);
	
	if(sale.price_per_item < 0) sale.price_per_item=0;
	if(sale.quantity < 0) sale.quantity=0;
	
	invoice_amount= sale.quantity * sale.price_per_item;
	
	printf("\nPart Number: %s", sale.part_number);
    printf("Part Description: %s", sale.part_description);
    printf("Quantity: %d\n", sale.quantity);
    printf("Price per Item: %.2f\n", sale.price_per_item);
    printf("Invoice Amount: %.2f\n", invoice_amount);
return 0;
}

