#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,c,d;
	clrscr();
	printf("Enter A value:");
	scanf("%d",&a);
	printf("Enter B value:");
	scanf("%d",&b);
	printf("Enter C value:");
	scanf("%d",&c);
	d=((a>b)?((a>c)?a:c)):((b>c)?b:c)));
	printf("Large Number is:%d",d);
	getch();
}
