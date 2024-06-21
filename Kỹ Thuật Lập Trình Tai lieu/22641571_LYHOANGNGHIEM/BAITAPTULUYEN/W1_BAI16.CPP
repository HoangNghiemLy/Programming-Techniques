#include<stdio.h> 
int main ()
{
	printf("***CHUONG TRINH TINH PHEP CHIA DU***");
	int x, y, sodu;
	printf("\nNhap 2 so nguyen: ");
	scanf("%i%i",&x,&y);
	sodu=x%y;
	printf(" Modulo = %d",sodu );  
 }
