#include<stdio.h>
#include<conio.h>
void main(){
	int n,f0,f1,f2;
	clrscr();
	printf("Enter N value:");
	scanf("%d",&n);
	f0=0;
	f1=1;
	f2=f0+f1;
	printf("\n %d %d",f0,f1);
	while(f2<=n){
	printf("\t %d",f2);
	f0=f1;
	f1=f2;
	f2=f0+f1;
	}
	getch();
}