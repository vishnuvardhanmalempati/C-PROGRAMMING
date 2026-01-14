#include<stdio.h>
#include<conio.h>
void sum();
void main(){
	clrscr();
	sum();
	getch();
}
void sum(){
	int a,b,c;
	printf("Enter A value:");
	scanf("%d",&a);
	printf("Enter B value:");
	scanf("%d",&b);
	c=a+b;
	printf("\n %d",c);
}
