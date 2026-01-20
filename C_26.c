#include<stdio.h>
#include<conio.h>
void main(){
	char ch;
	clrscr();
	printf("Enter CHARACTER:\n");
	scanf("%c",&ch);
	if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
	printf("CHARACTER IS IN ALPHABET:\n");
	if(ch>='A'&&ch<='Z'){
		printf("CHARACTER IS IN UPPER CASE:\n");
	}
	else if(ch>='a'&&ch<='z'){
		printf("charcter is in lower case:\n");
	}
	}
	else if(ch>='0'&&ch<='9'){
		printf("CHARCTER IS IN NUMBERS:");
	}
	else{
		printf("CHARACTER IS IN SPECIAL SYMBOL:");
	}
	getch();
}