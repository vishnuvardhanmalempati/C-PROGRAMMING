#include<stdio.h>
#include<conio.h>
void main(){
	int n,sum=0;
	clrscr();
	printf("Enter N value:");
	scanf("%d",&n);
	while(n>=1){
		printf("\t%d",n);
		sum=sum+n;
		n--;
	}
	printf("\n Sum:%d",sum);
	getch();
}
