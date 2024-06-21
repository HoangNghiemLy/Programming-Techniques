#include<stdio.h>
#include<math.h>
int main()
{
	printf("***CONG 2 PHAN SO***");
	int  a,b,c,d,e,f;
	printf("\nNhap gia tri phan so thu 1 (a/b): ");
	scanf("%i/%i",&a,&b);
	printf("\nNhap gia tri phan so thu 2 (c/d): ");
	scanf("%i/%i",&c,&d);
	e=a*d+b*c;
	f=b*d; 
	printf("Sum = %i/%i ",e,f); 
 } 
