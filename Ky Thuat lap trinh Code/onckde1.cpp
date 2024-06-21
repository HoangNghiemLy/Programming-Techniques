#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
struct vdv{
	char hoten[50];
	int mavdv;
	char quocgia[50];
	char ngaysinh[11];
	float thanhtich;
	int rank;
};
void nhap1(vdv &h){
	printf("\nNhap ma van dong vien: ");

	scanf("%d",&h.mavdv);
	printf("Nhap ten van dong vien: ");
	fflush(stdin);
	gets(h.hoten);
	printf("Quoc gia: ");
	fflush(stdin);
	scanf("%s",&h.quocgia);
	printf("Ngay sinh: ");
	fflush(stdin);
	scanf("%s",&h.ngaysinh);
	printf("Thanh tich: ");
	fflush(stdin);
	scanf("%f",&h.thanhtich);
	printf("Thu hang: ");
    fflush(stdin);
	scanf("%d",&h.rank);
}
void nhapds(vdv A[],int &n){
	do{
		printf("Nhap so luong vdv: ");
		scanf("%d",&n);
	}while(n<=0);
	for(int i=0;i<n;i++){
		printf("Van dong vien thu %d: ",i+1);
		nhap1(A[i]);
	}
}
void xuatb(vdv h){
	printf("%-30d  |  %-8s  |  %-8s  |  %-8s  |   %-8f   |   %-8d   |",h.mavdv,h.hoten,h.quocgia,h.ngaysinh,h.thanhtich,h.rank);
}
void xuatds(vdv A[],int n){
	printf("\nMa van dong vien  |  Ten van dong vien  |  Quoc gia  |  Ngay sinh  | Thanh tich  |  Thu hang");
	for(int i=0;i<n;i++){
		printf("\n");
		xuatb(A[i]);
	}
}
void sort(vdv A[],int n){
	int i,j;
	vdv t;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(A[i].thanhtich<A[j].thanhtich){
				t=A[i];
				A[i]=A[j];
				A[j]=t;
			}
		}
	}
}
void sapxepthanhtich(vdv A[],int n){
	sort(A,n);
	for(int i=0;i<n;i++){
		A[i].rank=i+1;
	}
}
void menu(){
	printf("\n---CHUONG TRINH VAN DONG VIEN---\n");
	printf("\n1. Them van dong vien");
	printf("\n2. Xuat thong tin van dong vien");
	printf("\n3. Sap xep vdv theo thu tu giam dan thanh tich");
	printf("\n4. Cap nhat thu hang vdv");
}

int main(){
	vdv A[MAX];
	vdv h;
	int n,chon;
	do{
		system("cls");
		menu();
		printf("\nChon chuc nang, chon 0 de thoat:  ");
		scanf("%d",&chon);
		switch(chon){
			case 1: nhapds(A,n); break;
			case 2: xuatds(A,n); system("pause"); break;
			case 3: sort(A,n); xuatds(A,n); system("pause"); break;
			case 4: sapxepthanhtich(A,n); xuatds(A,n); system("pause"); break;
		}
	}while (chon!=0);
}