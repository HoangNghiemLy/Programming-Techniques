#include<stdio.h> 
int main() 
{
	printf("***TINH CHI SO BMI THEO CHIEU CAO VA CAN NANG***"); 
	float chieucao, cannang, BMI; 
	printf("\nNhap chieu cao(m): "); 
	scanf("%f",&chieucao); 
	printf("\nNhap can nang(kg): "); 
	scanf("%f", &cannang); 
	BMI=cannang/(chieucao*chieucao); 
	printf("\nBMI=%f",BMI);
}
