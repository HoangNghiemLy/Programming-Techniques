#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	float s,c;
	printf("\nNhap canh goc vuong thu nhat a = "); scanf("%d",&a);
	printf("\nNhap canh goc vuong thu hai b = "); scanf("%d",&b);
	s = (a*b)/2;
	printf("\nDien tich = %.4f",s);
	c = sqrt((a*a)+(b*b));
	printf("\nCanh huyen = %.4f",c);
}
