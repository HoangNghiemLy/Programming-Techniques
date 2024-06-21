#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,y1,y2,d;
	printf("Nhap toa do x1,y1 ");  scanf("%f%f",&x1,&y1);
	printf("Nhap toa do x2,y2 ");  scanf("%f%f",&x2,&y2);
	d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("Khoang cach giua 2 diem trong mat phang XY la: %.4f ",d); 
	 
 } 
