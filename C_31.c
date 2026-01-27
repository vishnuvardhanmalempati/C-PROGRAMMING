#include<stdio.h>
#include<conio.h>
int fact(int n){
	int i=1,fact=1;
	while(i<=n){
	fact=fact*i;
	i++;
	}
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
