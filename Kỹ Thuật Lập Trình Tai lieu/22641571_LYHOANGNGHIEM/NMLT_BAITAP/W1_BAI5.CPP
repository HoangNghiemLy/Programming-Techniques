#include<stdio.h>
#include<math.h>
int main() 
{
	printf("***CHUONG TRINH TINH CHU VI VA DIEN TICH HINH TRON***"); 
	float bankinh, chuvi, dientich;
	printf("\nNhap ban kinh: "); 
	scanf("%f",&bankinh);  
	chuvi=M_PI*(bankinh*2); 
	printf("chuvi=%f",chuvi);
	dientich=M_PI*bankinh*bankinh; 
	printf("\ndientich=%f",dientich); 
}
