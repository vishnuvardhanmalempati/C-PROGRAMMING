#include<stdio.h>
#include<conio.h>
void main(){
	int a,b;
	clrscr();
	printf("Enter A value:");
	scanf("%d",&a);
	printf("Enter B value:");
	scanf("%d",&b);
	printf("\nValues Before Swapping:%d,%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nValues After Swapping:%d,%d",a,b);
	getch();
}
