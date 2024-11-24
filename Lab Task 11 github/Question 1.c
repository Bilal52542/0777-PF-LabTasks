#include<stdio.h>

struct Rectangle{
	float length,width;
};
float calculate_area(struct Rectangle rectangle){
	float area=rectangle.length*rectangle.width;
return area;
}
float calculate_perimeter(struct Rectangle rectangle){
	float perimeter=(2*rectangle.length)+(2*rectangle.width);
return perimeter;
}
int check(struct Rectangle rectangle){
	if(rectangle.length>0.0 && rectangle.length<20.0 && rectangle.width>0.0 && rectangle.width<20.0){
		return 1;
	}else return 0;
}
int main(){
	struct Rectangle rectangle;
	
	printf("Enter length and width of rectangle : ");
	scanf("%f %f",&rectangle.length,&rectangle.width);
	while(check(rectangle)==0){
		printf("Length and width are within range\n");
		printf("Enter length and width of rectangle : ");
		scanf("%f %f",&rectangle.length,&rectangle.width);
	}
	float area=calculate_area(rectangle);
	printf("Area is %.2f \n",area);
	float perimeter=calculate_perimeter(rectangle);
	printf("Perimeter is %.2f \n",perimeter);
return 0;
}

