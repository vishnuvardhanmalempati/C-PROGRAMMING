#include<stdio.h>
#include<conio.h>
int fact(int n){
	int i=1,fact=1;
	do{
	fact=fact*i;
	i++;
	}while(i<=n);
	printf("Factorial:%d",fact);
	return 0;
}
void main(){
	int n;
	clrscr();
	printf("Enter N value:");
	scanf("%d",&n);
	fact(n);
	getch();
}
