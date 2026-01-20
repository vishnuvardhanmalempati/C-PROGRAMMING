#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,c,f,g,h;
	float d,i;
	clrscr();
	printf("Enter Marks Out of 10");
	printf("--------------------------------------\n");
	printf("Enter C PROGRAMING Marks:");
	scanf("%d",&a);
	printf("Enter JAVA PROGRAMING Marks:");
	scanf("%d",&b);
	printf("Enter PYTHON PROGRAMMING Marks:");
	scanf("%d",&c);
	printf("Enter DSA Marks:");
	scanf("%d",&f);
	printf("Enter APITTUDE Marks:");
	scanf("%d",&g);
	printf("Enter TECHINCAL Marks:");
	scanf("%d",&h);
	printf("\n--------------------------------------\n");
	i=a+b+c+f+g+h;
	printf("\nTOTAL:%2f",i);
	d=((i)/6);
	printf("\nAVERAGE:%2f\n",d);
	if(i>18){
	printf("PASS\n");
	if(i<=60&&i>=50){
		printf("GRADE: A");
	}
	else if(i<50&&i>39){
		printf("GRADE: B");
	}
	else if(i<40&&i>29){
		printf("GRDAE: C");
	}
	else if(i<30&&i>19){
		printf("GRADE: D");
	}
	else{
		printf("GRADE: E");
	}
	}
	else{
		printf("FAIL");
	}
	getch();
}