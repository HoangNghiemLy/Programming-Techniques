#include<stdio.h>
#include<math.h>
int main()
{
	float doC, doF;
	printf("\nNhap gia tri do F = ");
	scanf("%f",&doF);
	doC = 5.0/9*(doF - 32);
	printf("do C : %.4f",doC);
	fflush(stdin);
	printf("\nNhap gia tri do C = ");
	scanf("%f",&doC);
	doF= 9.0/5*doC+32;
	printf("\ndo F = %.4f",doF);
	
}
