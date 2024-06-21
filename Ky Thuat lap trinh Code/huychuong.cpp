#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
struct vdv {
	char hoten[50];
	char mavdv[50];
	char quocgia[50];
	char ngaysinh[11];
	float thanhtich;
	int rank;
};
void nhap1(vdv &h){
	printf("\nNhap ma van dong vien: ");
	fflush(stdin);
	scanf("%s",&h.mavdv);
	printf("Nhap ten van dong vien: ");
	fflush(stdin);
	scanf("%s",&h.hoten);
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
		printf("Nhap so luong van dong vien: ");
		scanf("%d",&n);
	}while(n<=0);
	for(int i=0;i<n;i++){
		printf("Van dong vien thu %d: ",i+1);
		nhap1(A[i]);
	}
}
void nhapb(vdv h){
	printf("%-20s   |   %-8s   |   %-5s   |   %-5s   |   %-5f   |    %-5d   |",h.mavdv,h.hoten,h.quocgia,h.ngaysinh,h.thanhtich,h.rank);
}
void xuatds(vdv A[],int n){
	printf("\nMa van dong vien    |    Ten vdv    |   Quoc gia  |   Ngay sinh   |   Thanh tich  |  Thu hang  |");
	for(int i=0;i<n;i++){
		printf("\n");
		nhapb(A[i]);
	}
}
void sort(vdv A[],int n){
	vdv t;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(A[i].thanhtich<A[j].thanhtich){
				t=A[i];
				A[i]=A[j];
				A[j]=t;
			}
		}
	}
}
void sapxeptheorank(vdv A[],int n){
	sort(A,n);
	for(int i=0;i<n;i++){
		A[i].rank=i+1;
	}
}
int search(vdv A[],int n,char M[]){
	int i=0;
	while( i < n && strcmp(A[i].mavdv,M))  i++;
	if(i<n)  return i;
	else return -1;
}
void xuat2(vdv h){
	printf("\nMa van dong vien:%s",h.mavdv);
	fflush(stdin);
	printf("\nTen van dong vien:%s",h.hoten);
	fflush(stdin);
	printf("\nQuoc gia:%s",h.quocgia);
	fflush(stdin);
	printf("\nNgay sinh:%s",h.ngaysinh);
	fflush(stdin);
	printf("\nThanh tich:%.2f",h.thanhtich);
	fflush(stdin);
	printf("\nThu hang:%d",h.rank);
	fflush(stdin);
}
void menu(){
	printf("\n---CHUONG TRINH VAN DONG VIEN---\n");
	printf("\n1. Them van dong vien");
	printf("\n2. Xem thong tin van dong vien");
	printf("\n3. Sap xep theo thanh tich giam dan");
	printf("\n4. Sap xep theo thu hang tu cao den thap");
	printf("\n5. Tim kiem vdv theo ma van dong vien");
}
int main(){
	int n,chon,k;
	char M[9];
	vdv A[MAX];
	do{
		system("cls");
		menu();
		printf("\nChon chuc nang, chon 0 de thoat: ");
		scanf("%d",&chon);
		switch(chon){
			case 1: nhapds(A,n);  break;
			case 2: xuatds(A,n); system("pause"); break;
			case 3: sort(A,n); xuatds(A,n); system("pause"); break;
			case 4: sapxeptheorank(A,n); xuatds(A,n); system("pause"); break;
			case 5: printf("\nNhap ma van dong vien can tim: ");
			        fflush(stdin);
			        gets(M);
			        k=search(A,n,M);
			        if(k!=-1){
			        	xuat2(A[k]);
					}
					else printf("\nKhong co van dong vien"); break;
		}
	}while(chon!=0);
}