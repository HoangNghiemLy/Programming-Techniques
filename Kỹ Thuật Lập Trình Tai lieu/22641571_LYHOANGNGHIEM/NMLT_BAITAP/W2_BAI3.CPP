#include<stdio.h>
#include<math.h>
int main()
{
	int x1,y1,x2,y2 ;
	float d;
	printf("\nNhap toa do x1 = "); scanf("%d",&x1); 
	printf("\nNhap toa do y1 = "); scanf("%d",&y1);
	printf("\nNhap toa do x2 = "); scanf("%d",&x2);
	printf("\nNhap toa do y2 = "); scanf("%d",&y2); 
	d=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
	printf("\nKhoang cach d = %.4f",d);
}
