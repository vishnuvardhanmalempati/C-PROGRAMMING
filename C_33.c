#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,c,d,e;
	clrscr();
	printf("Enter A value:");
	scanf("%d",&a);
	printf("Enter B value:");
	scanf("%d",&b);
	printf("Enter C value:");
	scanf("%d",&c);
	d=((a>b)?((a>c)?a:c):((b>c)?b:c));
	e=((a<b)?((a<c)?a:c):((b<c)?b:c));
	printf("Largest:%d",d);
	printf("\nSmallest:%d",e);
	getch();
}
