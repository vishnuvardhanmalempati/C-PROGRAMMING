#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,c;
	clrscr();
	printf("Enter A,B,C values:");
	scanf("%d%d%d",&a,&b,&c);
	if(((a+b)>c)&&((a+c)>b)&&((b+c)>a)){
		printf("TRIANGLE");
	}
	else{
		printf("Not a TRIANGLE");
	}
	getch();
}
