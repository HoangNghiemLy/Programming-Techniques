#include<stdio.h>
#include<math.h> 
int main() 
{
	float x,y1,y2,c,d,e,f,g,h;
	printf("Nhap gia tri so thuc x = ");
	scanf("%f",&x);
	y1=4*(x*x+10*x*sqrt(x)+3*x+1);
	y2=(sin(3.141593*x*x)+sqrt(x*x+1))/(exp(2*x)+cos(3.141593/4*x));
	printf("Gia tri cua y1 = %f\n",y1);
	printf("Gia tri cua y2 = %f",y2); 
 } 
