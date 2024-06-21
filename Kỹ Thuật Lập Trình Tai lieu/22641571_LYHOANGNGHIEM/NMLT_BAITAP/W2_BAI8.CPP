#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	float b,c,d,e;
	printf("\nNhap gia tri cua x = ");
	scanf("%d",&x);
	b = (1+x*x);
	c = x*x/b;
	d = x*x/(1+c);
	e = x*x/(1+d);
	printf("\nGia tri cua bieu thuc = %f",e);
}
