#include<stdio.h>
void AB(int *x,int *y){
	int t;
	t=*x;
	*y=(*y)*2;
	if(t!=*x){
		printf("\n Interestingly!");
	}
}
int main(){
	int x,y;
	int k;
	printf("Nhap gia tri k: ");
	scanf("%d",&k);
	x=y=k;
	AB(&x,&x);
	printf("\n k= %d ",k);
	printf("\n x= %d\n y= %d",x,y);
	return 0;
}