#include <stdio.h>
#include <string.h>
#define MAX 100
#include<stdlib.h>
typedef struct NHANVIEN{
	char ma_nv[12];
	char ten_nv[60];
	char don_vi[200];
	float hs_luong;
}NHANVIEN;
NHANVIEN ds[100];

void nhapnv(NHANVIEN &ds){
	
		
		printf("Ma nhan vien ");
	
	    gets(ds.ma_nv);
		printf("Ten nhan vien ");
		gets(ds.ten_nv);
		printf("Don vi ");
		gets(ds.don_vi);
		printf("He so luong ");
		scanf("%f", ds.hs_luong);
	
}

void nhapnhieunv(NHANVIEN A[],int &n){
	printf("Nhap so luong nhan vien: ");
	scanf("%d",&n);
	fflush(stdin);
	for(int i=0;i<n;i++){
		nhapnv(A[i]);
		fflush(stdin);
	}
}
void xoanv(NHANVIEN A[],int n){
	char M[12];
	printf("Nhap ma nhan vien can xoa: ");
	gets(M);
	for(int i=0;i<n;i++){
		if(stricmp(A[i].ma_nv,M)==0){
			for(int j=i;j<n;j++){
				A[j]=A[j+1];
			}
			--n;
		}
	}
}
void innv_luongthaphontb(NHANVIEN A[],int n){
	
	printf("Danh sach nhan vien co luong thap hon luong tb: \n");
	for(int i=0;i<n;i++){
			printf("Ma nhan vien: %s\n", A[i].ma_nv);
			printf("Ten nhan vien: %s\n", A[i].ten_nv);
			printf("Don vi: %s\n", A[i].don_vi);
			printf("He so luong: %.2f\n", A[i].hs_luong);
		}
	}

void menu(){
	printf("\n1. Nhap nhan vien");
	printf("\n2. Xoa nhan vien theo ma");
	printf("\n3. Xuat thong tin nhan vien");
}

int main(){
	int n,chon;
	NHANVIEN A[MAX];
	do{
		system("cls");
		menu();
		printf("\nNhap lua chon, chon 0 de thoat: ");
		scanf("%d",&chon);
		fflush(stdin);
		switch(chon){
			case 1: nhapnhieunv(A,n); break;
			case 2: xoanv(A,n); break;
			case 3: innv_luongthaphontb(A,n); system("pause"); break;
			
		}
	}while(chon!=0);
}
