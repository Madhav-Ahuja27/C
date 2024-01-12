#include <stdio.h>
void main(){
	int a,b,c;
	printf("Enter 3 numbers:");
	scanf("%d %d %d",&a,&b,&c);
	int l;
	int k= a>b ? (a>c ? l=a : l=c) : (b>c ? l=b : l=c);
	printf("The biggest number is:%d",l);
	getch();
}
