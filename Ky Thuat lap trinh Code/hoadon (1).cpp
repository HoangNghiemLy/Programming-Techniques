#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
struct Hoadon{
	char mkh[10];
	char Tenkh[10];
	int Gv;
	int Gr;
	float sotien;
};
Hoadon H[100];
void nhap(Hoadon &H){
	printf("\nNhap ma khach hang: ");
	fflush(stdin);
	gets(H.mkh);
	printf("Ten khach hang: ");
	fflush(stdin);
	scanf("%s",&H.Tenkh);
    do{
    	printf("Gio vao: ");
    	scanf("%d",&H.Gv);
    	printf("Gio ra: ");
    	scanf("%d",&H.Gr);
	}while (H.Gv>=H.Gr || H.Gv<0 || H.Gr<0 || H.Gv<10 || H.Gr>22);	
}
void hoadonkh(Hoadon &H){
	nhap(H);
	int hieu=H.Gr-H.Gv;
	H.sotien=0;
	for(int i=H.Gv;i<H.Gr;i++){
		if(i<18)  H.sotien+=10;
		else H.sotien+=20;
	}
	if(hieu>5) H.sotien = H.sotien - H.sotien*(1.0*10/100);
}
void nhapds(Hoadon A[],int &n){
	do{
		printf("Nhap so luong khach hang: ");
		scanf("%d",&n);
	}while (n<0);
	for (int i=0;i<n;i++){
		printf("Khach hang thu %d: ",i+1);
		hoadonkh(A[i]);
	}
}
void xuat1(Hoadon H){
	printf("%-30s | %-8s  |  %4.1d  |  %4.1d |  %4.1f ",H.mkh,H.Tenkh,H.Gv,H.Gr,H.sotien);
}
void xuatds(Hoadon A[],int n){
	printf("\nMa khach hang      |   Ten khach hang    |  Gio vao | Gio ra  |    So tien   |");
	for(int i=0;i<n;i++){
		printf("\n");
		xuat1(A[i]);
	}
}
void sort(Hoadon A[],int n){
	int i,j;
	Hoadon t;
	for( i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(A[i].sotien<A[j].sotien){
				t=A[i];
				A[i]=A[j];
				A[j]=t;
			}
		}
	}
}
float timMax (Hoadon H[],int n){
	float max=-1e9;
	for(int i=0;i<n;i++){
		if(H[i].sotien>max) max=H[i].sotien;
	}
	return max;
}
void menu(){
	printf("\n+++KARAOKE+++\n");
	printf("\n1.Them khach hang");
	printf("\n2. Danh sach khach hang");
	printf("\n3. Sap xep so tien giam dan");
	printf("\n4. Xuat thong tin khach hang co so tien tra lon nhat");
}
int main(){
	int n,chon;
	Hoadon A[MAX];
	do{
		system("cls");
		menu();
		printf("\nNhap chuc nang, chon 0 de thoat: ");
		scanf("%d",&chon);
		switch(chon){
			case 1: nhapds(A,n); break;
			case 2: xuatds(A,n);system("pause");break;
			case 3: sort(A,n); xuatds(A,n); system("pause"); break;
			case 4: printf("Hoa don co so tien Max: %f",timMax(A,n)); system("pause");break;
		}
	}while (chon!=0);
		
}
