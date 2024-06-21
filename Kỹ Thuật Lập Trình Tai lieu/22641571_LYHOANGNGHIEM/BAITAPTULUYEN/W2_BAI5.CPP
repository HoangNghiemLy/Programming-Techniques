#include<stdio.h>
#include<math.h> 
int main()
{
	float a,b,c,p,s,chuvi ;
	printf("Nhap 3 canh cua tam giac : ");  scanf("%f%f%f",&a,&b,&c);
	p=(a+b+c)/2; 
	s=sqrt(p*(p-a)*(p-b)*(p-c));   printf("Dien tich tam giac la: %f",s);
	chuvi=a+b+c;      printf("\nChu vi tam giac: %f",chuvi); 
 } 
