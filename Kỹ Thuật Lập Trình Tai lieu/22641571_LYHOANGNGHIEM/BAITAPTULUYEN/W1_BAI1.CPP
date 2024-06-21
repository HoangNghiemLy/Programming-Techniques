#include<stdio.h> 
int main() 
{
	printf("***TINH GIA TRI CUA X VA Y***"); 
	int x,y,tong,hieu,tich,thuong; 
	printf("\nNhap gia tri cua x: ");
	scanf("%d",&x);
	printf("\nNhap gia tri cua y: "); 
	scanf("%d",&y); 
	tong=x+y;
	printf ("tong %d+%d=%d\n",x,y,tong ); 
	hieu=x-y;
	printf("hieu %d-%d=%d\n",x,y,hieu);
	tich=x*y;
	printf("tich %d*%d=%d\n",x,y,tich);
	thuong=x/y;
	printf("thuong %d/%d=%d\n",x,y,thuong ); 
 } 
