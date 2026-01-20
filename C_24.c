#include<stdio.h>
#include<conio.h>
void main(){
	char ch;
	clrscr();
	printf("Enter Character:");
	scanf("%c",&ch);
	switch(ch){
		case 'a':
			printf("VOWEL");
			break;
		case 'e':
			printf("VOEWL");
			break;
		case 'i':
			printf("VOWEL");
			break;
		case 'o':
			printf("VOWEL");
			break;
		case 'u':
			printf("VOWEL");
			break;
		default:
			printf("Not an VOWEL");
			break;
	}
		getch();

}
