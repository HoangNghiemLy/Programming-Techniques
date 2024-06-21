#include <stdio.h>  
#include <math.h>
void PTB2 (float a, float b, float c) {
	float delta=pow(b, 2)-4*a*c;
	if (delta>0) {
		float x1=(-b-sqrt(delta))/(a*2); 
		float x2=(-b+sqrt(delta))/(a*2);
		printf ("PT co 2 nghiem x1=%.2f va x2=%.2f", x1, x2); 
	} else if (delta==0) {
		float x=-b/(a*2);
		printf ("PT co nghiem kep x1=x2=%.2f", x); 
	} else {
		printf ("PT vo nghiem"); 
	} 
}
float LaiSuat (int p, float r, int y) {
	return p*pow(1+r, y); 
} 
int main() {
	int n;
	do {
		printf ("-----MENU-----\n");
		printf ("1- Quadratic equation\n");
		printf ("2- Bank deposit problem\n");
		printf ("3- Quit\n");
		printf ("Chon chuc nang: ");
		scanf ("%d", &n); 
		if (n==1) {
			float a, b, c;
			printf ("Nhap a: ");
			scanf ("%f", &a); 
			printf ("Nhap b: ");
			scanf ("%f", &b); 
			printf ("Nhap c: ");
			scanf ("%f", &c); 
			PTB2(a, b, c); 
		} else if (n==2) {
			int p, y;
			float r;
			printf ("Nhap so von: ");
			scanf ("%d", &p);
			printf ("Nhap phan tram lai: ");
			scanf ("%f", &r);
			printf ("Nhap so nam gui: ");
			scanf ("%d", &y); 
			printf ("So tien sau thoi gian gui ngan hang: %.2f", LaiSuat(p, r, y)); 
		} 
	} while (n<1 || n>3); 
} 
