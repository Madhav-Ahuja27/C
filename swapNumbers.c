#include <stdio.h>
void main(){
	printf("Enter the two numbers to be swapped");
	int a,b;
	printf("\nFirst number:");
	scanf("%d",&a);
	printf("\nSecond number:");
	scanf("%d",&b);
	int c;
	c=a;
	a=b;
	b=c;
	printf("\nValue of first number:%d",a);
	printf("\nValue of second number:%d",b);
	getch();
}
