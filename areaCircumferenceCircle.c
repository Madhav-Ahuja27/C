#include <stdio.h>
void main(){
	int radius;
	printf("Enter the radius of the circle:");
	scanf("%d",&radius);
	float area,circumference;
	area=3.14*(radius*radius);
	printf("The area of the circle:%.2f",area);
	printf("\n");
	circumference=2*3.14*radius;
	printf("The circumference of the circle:%.2f",circumference);
	getch();
}
