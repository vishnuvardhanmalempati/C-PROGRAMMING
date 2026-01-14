#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,h;
	clrscr();
	printf("Enter Base of the Triangle:");
	scanf("%d",&b);
	printf("Enter Height of the Triangle:");
	scanf("%d",&h);
	a=(1.0/2)*b*h;
	printf("\n Area of the Triangle:%d",a);
	getch();
}
