#include<stdio.h>
int main()
{
	int a, gia_tien;
	printf("nhap vao so ao can mua:");
	scanf("%d",&a);
	
	if(a<=3)
	{
		gia_tien=a*120000;
		printf("gia tien la: %d",gia_tien);
		
	}
	else if(a>=4 && a<=6)
	{
			gia_tien=a*90000;
		printf("gia tien la:%d",gia_tien);
	}
	else if(a>=7 && a<=10)
	{
	
		gia_tien=a*85000;
		printf("gia tien la:%d",gia_tien);
	
		}	
	else if(a>=11)

	{
			gia_tien=a*70000;
		printf("gia tien la:%d",gia_tien);
	
		}
	}
