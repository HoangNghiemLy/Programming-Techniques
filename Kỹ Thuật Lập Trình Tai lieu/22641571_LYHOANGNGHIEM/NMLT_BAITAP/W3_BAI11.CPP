#include<stdio.h>
int main()
{
	int a;  float sotien;
	printf("Nhap so ki dien(kwh): ");    scanf("%i",&a);
	if (a>0&&a<=100)   printf("so tien phai tra la %f",sotien=a*950);
	if(a>100&&a<=150)  printf("so tien phai tra la %f",sotien=a*1250);
	if(a>150&&a<=200)  printf("so tien phai tra la %f",sotien=a*1350);
	if(a>200)          printf("so tien phai tra la %f",sotien=a*1550);
}
