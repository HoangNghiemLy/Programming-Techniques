#include<stdio.h>
float kq;
double luythua(float kq,float a,int n);
int main(){
	int n;
	float a;
	printf("\nNhap gia tri n :");
	scanf("%d",&n);
	printf("Nhap gia tri cua a: ");
	scanf("%f",&a);
	while(n<0){
		printf("Nhap lai gia tri n>0: ");
		scanf("%d",&n);
	}
	kq=a;
	printf("\nKet qua la A(%d): %lf ",n,luythua(a,a,n));
}
double luythua (float a, int n){
	if(n==1){
		return kq;
	}
	else {
		kq*=a;
		return luythua(a,n-1);
	}
}
