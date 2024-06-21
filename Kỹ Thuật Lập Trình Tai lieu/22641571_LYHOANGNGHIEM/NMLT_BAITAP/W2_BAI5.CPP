#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	float p,s;
	printf("\nNhap canh thu nhat a = "); scanf("%d",&a);
	printf("\nNhap canh thu hai b = "); scanf("%d",&b);
	printf("\nNhap canh thu ba c = "); scanf("%d",&c); 
	p=(a+b+c)/2; 
	s=sqrt((p*(p-a)*(p-b)*(p-c)));
	printf("\nDien tich tam giac = %.4f",s);
	d=a+b+c; 
	printf("\nChu vi tam giac = %d",d);
	
}
