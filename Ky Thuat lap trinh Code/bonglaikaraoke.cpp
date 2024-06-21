#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
struct hoadon{
	char mkh[20];
	char tenkh[20];
	int gv;
	int gr;
	float sotien;
};
hoadon H[100];
void nhap1(hoadon &h){
	printf("\nNhap ma khach hang: ");
	fflush(stdin);
	gets(h.mkh);
	printf("Nhap ten khach hang: ");
	gets(h.tenkh);
	do{
		printf("Gio vao: ");
		scanf("%d",&h.gv);
		printf("Gio ra: ");
		scanf("%d",&h.gr);
	}while(h.gv>=h.gr||h.gr<0||h.gv<0||h.gv<10||h.gr>22);
}
void thanhtoan(hoadon &h){
	nhap1(h);
	int hieu=h.gr-h.gv;	
	h.sotien=0;
	for(int i=h.gv;i<h.gr;i++){
		if(i<18) h.sotien+=10;
		else h.sotien+=20;
	} 
	if(hieu>5)  h.sotien=h.sotien-h.sotien*(1.0*10/100);
}
void nhapds(hoadon A[],int &n){
	do{
		printf("Nhap so luong khach hang: ");
		scanf("%d",&n);
	}while(n<0);
	fflush(stdin);
	for(int i=0;i<n;i++){
		printf("Khach hang thu %d: ",i+1);
		thanhtoan(A[i]);
		fflush(stdin);
	}
}
void xuathoadon(hoadon h){
	printf("%-30s   |  %-8s   |  %4.1d  |  %4.1d  |  %4.1f", h.mkh,h.tenkh,h.gv,h.gr,h.sotien);
}
void xuatds(hoadon A[],int n){
	printf("\nMa khach hang    |  Ten khach hang   |  Gio vao |  Gio ra  |  So tien   | ");
	for (int i=0;i<n;i++){
		printf("\n");
		xuathoadon(A[i]);
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
void xuathoadoncaonhat(hoadon A[],int n){
	int max_tien=A[0].sotien;
	for(int i=0;i<n;i++){
		if(A[i].sotien<max_tien){
			break;
		}
		printf("\n---Thong tin khach hang tra tien cao nhat---\n");
		printf("\nMa khach hang    |  Ten khach hang  |  Gio vao |  Gio ra  |  So tien  | ");
		printf("\n");
		xuathoadon(A[i]);
	}
}
int search(hoadon A[],int n,char M[]){
	int i=0;
	while(i<n&&strcmp(A[i].mkh,M))  i++;
	if(i<n){
		return i;
	}else{
		return -1;
	}
}
void xuat2(hoadon h){
	printf("\nMa khach hang:%s",h.mkh);
	printf("\nTen khach hang:%s",h.tenkh);   
	printf("\nGio vao:%d",h.gv);
	printf("\nGio ra:%d",h.gr);
	printf("\nSo tien:%f",h.sotien);
}
void xoakh(hoadon A[],int &n){
	char M[12];
	printf("\nNhap ma khach hang can xoa: ");
	fflush(stdin);
	gets(M);
	for(int i=0;i<n;i++){
		if(stricmp(A[i].mkh,M)==0){
			for(int j=i;j<n;j++){
				A[j]=A[j+1];
			}
			n--;
		}
	}
}

void themKhachHangVaoViTriBatKy(hoadon A[],int &n,int vitri){
	hoadon q;
	nhap1(q);
	
	++n;
	for(int i=n-1;i>vitri;--i){
		A[i] = A[i-1];
	}
	A[vitri] = q;
}
void menu(){
	printf("\n---KARAOKE BONG LAI---\n");
	printf("\n1.Them thong tin khach hang");
	printf("\n2.Danh sach khach hang");
	printf("\n3.Sap xep so tien tra giam dan");
	printf("\n4.Xuat thong tin khach hang co hoa don cao nhat");
	printf("\n5.Tim kiem khach hang theo ma khach hang");
	printf("\n6. Xoa khach hang theo ma khach hang");
	printf("\n7. Them khach hang o vi tri bat ki");
}
int main(){
	int n,chon,k,vitri;
	hoadon A[MAX];
	char M[20];
	system("cls");
	do{
		menu();
		printf("\nChon chuc nang, chon 0 de thoat: ");
		scanf("%d",&chon);
		switch(chon){
			case 1: nhapds(A,n);   break;
			case 2: xuatds(A,n); system("pause"); break;
			case 3: sort(A,n);  xuatds(A,n); system("pause"); break;
			case 4: xuathoadoncaonhat(A,n);  break;
			case 5: printf("\nNhap ma khach hang can tim: ");
			        fflush(stdin);  gets(M);
			        k=search(A,n,M);
			        if(k!=-1)  xuat2(A[k]);
			        else  printf("\nKhong co khach hang");  break;
			case 6: xoakh(A,n); xuatds(A,n); system("pause"); break;
			case 7: themKhachHangVaoViTriBatKy(A,n,vitri); break;
			        
		}
		
	}while (chon!=0);
}