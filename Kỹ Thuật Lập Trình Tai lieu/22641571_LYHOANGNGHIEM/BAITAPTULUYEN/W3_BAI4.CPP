#include<stdio.h>
int main()
{
	int x,y;
	printf("nhap toa do X va Y: ");
	scanf("%i%i",&x,&y);
	if(x>0&&y>0){
		printf("(%i,%i) nam o goc phan tu thu I",x,y); 
	}else if(x<0&&y>0){
		printf("(%i,%i) nam o goc phan tu thu II",x,y); 
	} else if(x>0&&y<0){
		printf("(%i,%i) nam o goc phan tu thu IV",x,y); 
	}else if(x==0&&y==0){
		printf("(0,0) nam o goc toa do ",x,y); 
	} else{
		printf("(%i,%i) nam o goc phan tu thu III",x,y); 
	} 
 } 
