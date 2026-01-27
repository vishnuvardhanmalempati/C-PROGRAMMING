#include<stdio.h>
#include<conio.h>
void main(){
	int n,sum=0,i;
	clrscr();
	printf("Enter N value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d\t",i);
		sum=sum+i;
	}
	printf("\n Sum:%d",sum);
	getch();
}
