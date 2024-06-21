#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("\nNhap so a = "); scanf("%d",&a);
	printf("\nNhap so b = "); scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\n gia tri sau cua a = %d ",a);
	printf("\n gia tri sau cua b = %d",b);
	
}
