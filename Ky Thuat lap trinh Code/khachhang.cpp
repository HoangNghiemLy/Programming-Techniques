#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
struct hoadon{
	char mkh[10];
	char Tenkh[10];
	int gv;
	int gr;
	float sotien;
};
hoadon h[100];
void nhap1(hoadon &h){
	printf("Nhap ma khach hang: ");
	fflush(stdin);
	gets(h.mkh);
	printf("Nhap ten khach hang: ");
	fflush(stdin);
	gets(h.Tenkh);
	do{
		printf("Gio vao: ");
		scanf("%d",&h.gv);
		printf("Gio ra: ");
		scanf("%d",&h.gr);
	}while(h.gv>=h.gr||h.gr<0||h.gv<0||h.gv<10||h.gr>22);
}

void sotienkhachhang(hoadon &h){
	nhap1(h);
	int hieu=h.gr-h.gv;
	h.sotien=0;
	for(int i=h.gv;i<h.gr;i++){
		if(i<18)  h.sotien+=10;
		else h.sotien+=20;
	}
	if(hieu>5) h.sotien = h.sotien - h.sotien*(1.0*10/100);
}
void nhapds(hoadon A[],int &n){
	do{
		printf("Nhap so luong khach hang: ");
		scanf("%d",&n);
	}while(n<0);
	for(int i=0;i<n;i++){
		printf("Khach hang thu %d:\n ",i+1);
		sotienkhachhang(A[i]);
	}
}
void xuat1(hoadon h){
	printf("%-30s  | %-8s  |  %4.1d  |  %4.1d  |  %4.1f ",h.mkh,h.Tenkh,h.gv,h.gr,h.sotien);
}
void xuatds(hoadon A[],int n){
	printf("\nMa khach hang     |    Ten khach hang   |    Gio vao  |   Gio ra   |  So tien ");
	for(int i=0;i<n;i++){
		printf("\n");
		xuat1(A[i]);
	}
}
void sort(hoadon A[],int n){
	int i,j;
	hoadon t;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(A[i].sotien<A[j].sotien){
				t=A[i];
				A[i]=A[j];
				A[j]=t;
			}
		}
	}
}


float timmax(hoadon h[],int n){
	float max=-1e9;
	for(int i=0;i<n;i++){
		if(h[i].sotien>max)  max=h[i].sotien;
	}
	return max;
}
void menu(){
	printf("\n+++KHACH HANG KARAOKE+++\n");
	printf("\n1. Them khach hang");
	printf("\n2. Thong tin khach hang");
	printf("\n3. Danh sach khach hang co so tien tra giam dan");
	printf("\n4. Xuat thong tin cac khach hang co so tien phai tra cao nhat");
}

int main(){
	hoadon A[MAX];
	int n,chon;
	do{
		system("cls");
		menu();
		printf("\nChon chuc nang, chon 0 de thoat: ");
		scanf("%d",&chon);
		switch(chon){
			case 1: nhapds(A,n);  break;
			case 2: xuatds(A,n); system("pause"); break;
			case 3: sort(A,n);  xuatds(A,n); system("pause"); break;
			case 4: printf("So tien tra cao nhat: %f",timmax(A,n)); system("pause");  break;
			
		}
		
	}while (chon!=0);
	
}