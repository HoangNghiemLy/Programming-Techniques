#include<stdio.h>
int kq;
int capsocong(int n,int a,int r);
int main(){
	int n,a,r,i;
	printf("\nNhap so hang dau a= ");
	scanf("%d",&a);
	kq=a ;
	printf("\nNhap cong sai r= ");
	scanf("%d",&r);
	printf("\nNhap so luong phan tu can xuat n= ");
	scanf("%d",&n);
	if(n<=0){
		printf("So luong cac phan tu can xuat khong hop le");
	}

	printf("\n gia tri thu cua cap so cong = %5d",capsocong(n,a,r));
	
}
int capsocong(int n,int a,int r){
	if(n==1){
		return kq;
	}
	else {
		kq +=r ;
		return capsocong(n-1,a,r);
	}
}
