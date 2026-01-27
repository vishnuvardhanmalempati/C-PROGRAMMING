#include<stdio.h>
#include<conio.h>
long int fact(int n){
	int i,fact=1;
	for(i=1;i<=n;i++){
	fact=fact*i;
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
