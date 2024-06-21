#include<stdio.h>
#include<math.h>
int main()
{
	float s,r; 
	float pi = 3.141593, v = 1.3333333333;
	printf("\nNhap dien tich mat cau = ");
	scanf("%f",&s);
    r=s/(4*pi);
    r=sqrt(r);
	v=pi*v;
	v=v*r*r*r;
	printf("\nGia tri the tich = %.4f",v);
}
