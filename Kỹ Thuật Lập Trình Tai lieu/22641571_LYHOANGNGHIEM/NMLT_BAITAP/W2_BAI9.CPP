#include<stdio.h>
#include<math.h>
int main()
{
	float x,y;
	float z;
	printf("\nNhap gia tri cua x = "); scanf("%f",&x);
	printf("\nNhap gia tri  cua y = "); scanf("%f",&y);	
	z = sqrt(1+pow(x,2)+pow(y,2))/(3+pow(x+y,2)); 
    printf("\nGia tri cua z = %.4f",z);
    
}
