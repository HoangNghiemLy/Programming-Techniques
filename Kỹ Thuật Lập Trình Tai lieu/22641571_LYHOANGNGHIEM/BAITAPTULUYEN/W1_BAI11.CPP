#include<stdio.h>
#define G  6.67E-11 
int main ()
{
	double m1,m2,F ;
	printf("\nNhap khoi luong 2 vat the: ");
	scanf("%lf%lf",&m1,&m2);
	int r; 
	printf("\nNhap khoang cach 2 vat the: ");
	scanf("%i",&r);
	F=(G*m1*m1)/(r*r);
	printf("Luc van vat hap dan giua 2 vat the: %.15lf\n ",F); 
 } 
