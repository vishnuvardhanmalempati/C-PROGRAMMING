#include<stdio.h>
#include<conio.h>
void main(){
	float pi=3.14159,sr,cr,h,vs,vc;
	clrscr();
	printf("-------------------------\n");
	printf("     VOLUME OF SPHERE    \n");
	printf("Enter Sphere Radius:\n");
	scanf("%f",&sr);
	vs=((4.0/3)*pi*sr*sr*sr);
	printf("--------------------------\n");
	printf("Enter Cylinde Radius:\n");
	scanf("%f",&cr);
	printf("Enter Cylinder Height:\n");
	scanf("%f",&h);
	vc=(pi*cr*cr*h);
	printf("---------------------------\n");
	printf("VOLUME OF SPHERE:%f\n",vs);
	printf("VOLUME OF CYLINDER:%f",vc);
	getch();
}
