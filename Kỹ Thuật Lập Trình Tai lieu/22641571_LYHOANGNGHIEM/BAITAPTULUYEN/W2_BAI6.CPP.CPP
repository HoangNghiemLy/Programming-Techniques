#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c ;
	printf("Nhap 2 so a va b : "); scanf("%i%i",&a,&b);
	c = a;
	a = b;
	b = c;
	printf("Gia tri hoan doi la:%i",a,b); 
 } 
