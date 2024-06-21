#include<stdio.h>
#include<math.h>
long tich (int n);
int main(){
	int n;
	printf("\nNhap gia tri n: ");
	scanf("%d",&n);
	while(n<0){
		printf("Nhap lai gia tri n: ");
		scanf("%d",&n);
	}
	tich(n);
	printf("\nKet qua P(%d): %d ",n,tich(n));
}
long tich(int n){
	if(n==1){
		return 1;
	}
	else {
		return tich(n-1)*n ;
	}
}

