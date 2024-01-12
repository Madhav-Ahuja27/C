#include <stdio.h>
#include <conio.h>
void main(){
	int a,b;
	printf("Enter dividend");
	scanf("%d",&a);
	printf("Enter divisor");
	scanf("%d",&b);
	int q,r;
	q=a/b;
	r=a%b;
	printf("The quotient is:%d",q);
	printf("\n");
	printf("the remainder is:%d",r);
	getch();
}
