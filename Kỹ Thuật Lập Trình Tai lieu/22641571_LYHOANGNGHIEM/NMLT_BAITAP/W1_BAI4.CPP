#include<stdio.h> 
int main() 
{
	printf("***CHUONG TRINH TINH CHU VI VA DIEN TICH HINH CHU NHAT");
	float chieudai,chieurong,chuvi,dientich;
	printf("\nNhap chieu dai: ");
	scanf("%f",&chieudai);
	printf("\nNhap chieu rong: "); 
	scanf("%f",&chieurong); 
	chuvi=(chieudai+chieurong)*2;
	printf("chu vi=%f",chuvi );
	dientich=chieudai*chieurong; 
	printf("\ndien tich=%f",dientich); 
	
}
