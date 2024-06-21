#include<stdio.h>
int main()
{
	printf("***TINH SO CHI BMI***");
	float chieucao, cannang, BMI;
	printf("\nNhap chieu cao(m): ");
	scanf("%f",&chieucao );
	printf("\nNhap can nang(kg): ");
	scanf("%f",&cannang);
	BMI= cannang/(chieucao*chieucao);
	printf(" BMI = %f ",BMI ); 
	 
 } 
