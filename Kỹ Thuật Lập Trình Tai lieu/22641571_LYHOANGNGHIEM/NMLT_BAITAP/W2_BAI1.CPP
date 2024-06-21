#include<stdio.h>
#include<math.h>
int main()
{
	float  a,b,c,d,e,f,g,z; 
	printf("\nNhap gia tri cua a = "); scanf("%f",&a);
	printf("\nNhap gia tri cua b = "); scanf("%f",&b);
	printf("\nNhap gia tri cua c = "); scanf("%f",&c);
	printf("\nNhap gia tri cua d = "); scanf("%f",&d);
	printf("\nNhap gia tri cua e = "); scanf("%f",&e);
	printf("\nNhap gia tri cua f = "); scanf("%f",&f);
    printf("\nNhap gia tri cua g = "); scanf("%f",&g);
    z = ((a+b/c*d-e)*(f-g));
    printf("\nGia tri cua z = %f ",z);
					
}
