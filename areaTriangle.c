#include <stdio.h>
void main(){
	int base,height;
	printf("Enter the base and the height:");
	scanf("%d %d",&base,&height);
	float area;
	area=(base*height)/2;
	printf("The area of the triangle is:%.2f",area);
	getch();
}
