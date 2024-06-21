#include<stdio.h>
#include<math.h>
int main()
{
	int  x,y,z,n,s ; 
	printf("\nNhap so n co 3 chu so = "); scanf("%d",&n);
	x=n/100;
	y=(n-(x*100))/10;
	z=n-(x*100+y*10);
	s=x+y+z;
	
	printf("\nGia tri cua s = %d ",s);
	
}
