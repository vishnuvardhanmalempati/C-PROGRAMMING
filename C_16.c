#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	int s,a,b,c,n;
	clrscr();
	printf("Enter A,B,C values:");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	n=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of Triangle:%d",n);
	getch();
}
