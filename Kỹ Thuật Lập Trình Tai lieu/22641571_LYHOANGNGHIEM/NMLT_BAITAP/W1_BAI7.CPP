#include<stdio.h> 
int main() 
{
	printf("***CHUONG TRINH CHUYEN DOI SO NGAY THANH NAM,TUAN VA NGAY CON LAI***");
	int a,b,c,d; 
	printf("\nNhap so ngay muon chuyen doi: "); 
	scanf("%i",&a);
	b=a/365; 
	printf("years: %i\n",b); 
	c=(a-(b*365))/7;
	printf("weaks: %i\n",c);
	d=a-(b*365+c*7);
	printf("days: %i",d);
}
