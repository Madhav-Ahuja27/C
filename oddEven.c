#include <stdio.h>
void main(){
	printf("Enter the number:");
	int n;
	scanf("%s",&n);
	int r;
	r=(n%2==0);
	printf("The number given is even: %d",r);
	getch();
}
