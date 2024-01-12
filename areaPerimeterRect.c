#include <stdio.h>
void main(){
	int l,b;
	printf("Enter the length of the rectangle:");
	scanf("%d",&l);
	printf("Enter the breadth of the rectangle:");
	scanf("%d",&b);
	int area;
	area=l*b;
	printf("The area is:%d",area);
	int perm;
	perm=2*(l+b);
	printf("\nThe perimeter of the rectangle is:",perm);
	getch();
}
