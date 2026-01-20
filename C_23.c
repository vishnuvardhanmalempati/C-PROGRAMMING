#include<stdio.h>
#include<conio.h>
void main(){
	char ch;
	clrscr();
	printf("Enter Character:");
	scanf("%c",&ch);
	if(ch>'a'&&ch<'z'){
	if(ch=='a'){
		printf("VOWEL");
	}
	else if(ch=='e'){
		printf("VOWEL");
	}
	else if(ch=='i'){
		printf("VOWEL");
	}
	else if(ch=='o'){
		printf("VOWEL");
	}
	else if(ch=='u'){
		printf("VOWEL");
	}
	else {
		printf("NOT AN VOWEL");
	}
	}
	else{
		printf("Not an Character");
	}
	getch();
}
