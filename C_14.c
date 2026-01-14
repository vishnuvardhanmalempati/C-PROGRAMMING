#include<stdio.h>
#include<conio.h>
void main(){
	float r, pi=3.142857142857143,c;
	clrscr();
	printf("Enter Radius of the Circle:");
	scanf("%f",&r);
	c=pi*r*r;
	printf("Area of Circle:%f",c);
	getch();
}
