#include<stdio.h>
#include<conio.h>
void main(){
	int n,sum=0;
	clrscr();
	printf("Enter N value:");
	scanf("%d",&n);
	do{
		printf("%d\t",n);
		sum=sum+n;
		n--;
	}while(n>=1);
	printf("\n%d",sum);
	getch();
}
