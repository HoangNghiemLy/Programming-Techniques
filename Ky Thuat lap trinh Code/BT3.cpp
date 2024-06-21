#include<stdio.h>
int kq;
int capsonhan(int n,int a,int q);
int main(){
	int n,a,q;
	printf("\nNhap so hang dau a= ");
	scanf("%d",&a);
	kq=a ;
	printf("\nNhap cong boi q= ");
	scanf("%d",&q);
	printf("\nNhap so luong phan tu can xuat n= ");
	scanf("%d",&n);
	if(n<=0){
		printf("So luong cac phan tu can xuat khong hop le");
	}

	printf("\n gia tri thu cua cap so nhan = %5d",capsonhan(n,a,q));
	
}
int capsonhan(int n,int a,int q){
	if(n==1){
		return kq;
	}
	else {
		kq *=q ;
		return capsonhan(n-1,a,q);
	}
}
