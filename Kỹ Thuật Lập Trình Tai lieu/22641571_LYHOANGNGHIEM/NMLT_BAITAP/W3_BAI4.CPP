#include<stdio.h>
int main()
{
	int x,y;
	printf("Nhap toa do x va y: ");   scanf("%d%d",&x,&y);
	if(x>0&&y>0){
		printf("%d va %d nam goc phan tu thu 1",x,y);
	}else if(x>0&&y<0){
		printf("%d va %d nam o goc phan tu thu 4",x,y);
	}else if(x<0&&y>0){
		printf("%d va %d nam o goc phan tu thu 2",x,y);
	}else if(x==0&&y==0){
		printf("%d va %d nam o goc toa do",x,y);
	}
	else {
		printf("%d va %d nam o goc phan tu thu 3",x,y);
	}
}
