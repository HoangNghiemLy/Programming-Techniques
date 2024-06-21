#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define MAX 100
struct Sinhvien{
	char hoten[30];
	char Masv[10];
	float tk,gk,ck,th,dtb;
};
void nhap1sv(Sinhvien &sv){
	printf("Nhap ho ten: ");
	fflush(stdin);
	gets(sv.hoten);
	printf("Nhap ma sinh vien: ");
	fflush(stdin);
	gets(sv.Masv);
	printf("Diem thuong ki: ");
	fflush(stdin);
	scanf("%f",&sv.tk);
	printf("Diem giua ki: ");
	fflush(stdin);
	scanf("%f",&sv.gk);
	printf("Diem cuoi ki: ");
	fflush(stdin);
	scanf("%f",&sv.ck);
	printf("Diem thuc hanh: ");
	fflush(stdin);
	scanf("%f",&sv.th);
	sv.dtb=((2 * sv.tk + 3 * sv.gk + 5 * sv.ck) / 10.0f * 2 + sv.th) / 3.0f;	
	printf("Diem trung binh: %f\n ",sv.dtb);
}
void Nhapnhieusv(Sinhvien A[],int &n){
	printf("Nhap so luong sinh vien: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Nhap sinh vien thu %d:\n ",i+1);
		nhap1sv(A[i]);   
	}
}
void xuat1sv(Sinhvien sv){
	printf("%-30s | %-8s |   %4.1f   |  %4.1f   |  %4.1f   |  %4.1f   |   %5.2f  |",
		sv.hoten,sv.Masv,sv.tk,sv.gk,sv.ck,sv.th,sv.dtb);
}
void xuat2sv(Sinhvien sv){
	printf("\nMa sinh vien: %s ",sv.Masv);
	printf("\nHo ten: %s "); puts(sv.hoten);
	printf("Diem thuong ki: %.1f ",sv.tk);
	printf("\nDiem giua ki: %.1f ",sv.gk);
	printf("\nDiem cuoi ki: %.1f ",sv.ck);
	printf("\nDiem trung binh: %.3f\n ",sv.dtb);
}
void Xuatds(Sinhvien A[],int n){
	printf(" \t\n---DANH SACH SINH VIEN---\n");
    printf("\n| STT |            Ho ten              |   MaSV    |   TK    |   GK   |   CK   |   TH   |   DTB   |");
	for(int i=0;i<n;i++){
		printf("\n| %3d | ",i+1);
		xuat1sv(A[i]);
	}
}
void Xuatds4(Sinhvien A[],int n){
	int d=0;
	printf("\n---DANH SACH SINH VIEN CO DTB<4---\n");
   	printf("\n| STT |            Ho ten             |   MaSV   |   TK   |   GK  |   CK  |   TH  |   DTB  |");
	for(int i=0;i<n;i++){
		if(A[i].dtb<4.0){
			d++;
			printf("\n| %3d | ",d);
			xuat1sv(A[i]);
		}
	}
}
int Search(Sinhvien A[],int n, char M[]){
	int i=0;
	while(i<n&&strcmp(A[i].Masv,M))  i++;
	if(i<n)  return i;
	return -1;
}
void sort (Sinhvien A[],int n){
	int i,j;
	Sinhvien t;
	for(i=0;i<n-1;i++){
		for(j=i+1;i<n;j++){
			if(A[i].dtb<A[j].dtb){
				t=A[i];
				A[i]=A[j];
				A[j]=t;
			}
		}
	}
}
void menu(){
	printf("\n---CHUONG TRINH QUAN LY SINH VIEN---\n");
	printf("\n1. Nhap xuat danh sach sinh vien");
	printf("\n2. Xuat danh sach sinh vien co DTB < 4.0");
	printf("\n3. Tim thong tin sv theo MSVV");
	printf("\n4. Sap xep danh sach sv giam dan theo DTB");
}
int main(){
	int n,k,chon;
	char M[10];
	Sinhvien A[MAX];
	do{
		menu();
		printf("\nChon chuc nang, chon 0 de thoat: ");
		scanf("%d",&chon);
		switch(chon){
			case 1: Nhapnhieusv(A,n);  Xuatds(A,n);  break;
			case 2: Xuatds4(A,n); break;
			case 3: printf("Nhap ma so sinh vien can tim: ");
			        fflush(stdin); gets(M);
					k=Search(A,n,M);
					if(k!=-1)  xuat2sv(A[k]);
					else printf("Khong co sinh vien"); break;
			case 4: sort(A,n);  Xuatds(A,n); break;  
		}
	}while (chon!=0);
}