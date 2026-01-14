#include<stdio.h>
#include<conio.h>
void main(){
	int b,h,a;
	clrscr();
	printf("Enter Base of the Triangle:");
	scanf("%d",&b);
	printf("Enter Height of the Triangle:");
	scanf("%d",&h);
	a=0.5*b*h;
	printf("Area of Triangle is:%d",a);
	getch();
}
