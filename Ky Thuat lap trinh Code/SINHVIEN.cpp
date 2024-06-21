#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
struct sinhvien{
	char hoten[50];
	char masv[10];
	float tk,gk,ck,th,tb;
};
void nhap1(sinhvien &h){
	printf("\nNhap ten sinh vien: ");
	fflush(stdin);
	gets(h.hoten);
	printf("Ma sinh vien: ");
	fflush(stdin);
	gets(h.masv);
	printf("Diem thuong ki: ");
	fflush(stdin);
	scanf("%f",&h.tk);
	printf("Diem giua ki: ");
	scanf("%f",&h.gk);
	printf("Diem cuoi ki: ");
	fflush(stdin);
	scanf("%f",&h.ck);
	printf("Diem thuc hanh: ");
	scanf("%f",&h.th);
	h.tb=(((2*h.tk+3*h.gk+5*h.ck)/10.0f)*2+h.th)/3.0f;
	printf("Diem trung binh:%.2f\n",h.tb); 
	fflush(stdin);
}
void nhapds(sinhvien A[],int &n){
	do{
		printf("\nNhap so luong sinh vien: ");
		scanf("%d",&n);
	}while(n<=0);
	for(int i=0;i<n;i++){
		printf("Nhap sinh vien thu %d: ",i+1);
		nhap1(A[i]);
	}
}
void nhapb(sinhvien h){
	printf("%-15s   |  %-8s  |  %4.1f  |  %4.1f  | %4.1f |  %4.1f |  %5.2f  |",h.hoten,h.masv,h.tk,h.gk,h.ck,h.th,h.tb);
}
void xuatds(sinhvien A[],int n){
	printf("\n---DANH SACH SINH VIEN---\n");
	printf("\n|STT  |    Ho ten    |  Ma sinh vien  |  TK  |  GK  |  CK  |  TH  |  TB  |");
	for(int i=0;i<n;i++){
		printf("\n|%3d |",i+1);
		nhapb(A[i]);
	}
}
void xuat4(sinhvien A[],int n){
	int d=0;
	printf("\n---DANH SACH SINH VIEN DTB<4.0---\n");

	for(int i=0;i<n;i++){
		if(A[i].tb<4.0){
	        printf("\n|STT  |    Ho ten    |  Ma sinh vien  |  TK  |  GK  |  CK  |  TH  |  TB  |");
			d++;
			printf("\n|%3d |",d);
			nhapb(A[i]);
		}
	}
	for(int i=0;i<n;i++){
		if(A[i].tb>4.0){
			printf("\nKhong co sinh vien hoc lai\n");
		}
	}  
}
void sort(sinhvien A[],int n){
	int i,j;
	sinhvien t;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(A[i].tb<A[j].tb){
				t=A[i];
				A[i]=A[j];
				A[j]=t;
			}
		}
	}
}

int search(sinhvien A[],int n,char M[]){
	int i=0;
	while(i<n&&strcmp(A[i].masv,M))  i++;
	if(i<n)  return i;
	else return -1;
}
void xuatsearch(sinhvien h){
	printf("\nMa sinh vien:%s",h.masv);
	printf("\nHo ten:%s",h.hoten);
	printf("\nThuong ki:%f",h.tk);
	printf("\nGiua ki:%f",h.gk);
	printf("\nCuoi ki:%f",h.ck);
	printf("\nThuc hanh:%f",h.th);
	printf("\nDiem trung binh:%.2f",h.tb);
}
void menu(){
	printf("\n---QUAN LY SINH VIEN---\n");
	printf("\n1. Them sinh vien");
	printf("\n2. Xem thong tin sinh vien");
	printf("\n3. Danh sach sinh vien hoc lai");
	printf("\n4. Tim kiem sinh vien theo ma sinh vien");
	printf("\n5. Sap xep sinh vien theo diem trung binh giam dan");
	
}
int main(){
	int n,chon,k;
	char M[10];
	sinhvien A[MAX];
	do{
		system("cls");
		menu();
		printf("\nChon chuc nang, chon 0 de thoat: ");
		scanf("%d",&chon);
		switch(chon){
			case 1: nhapds(A,n); break;
			case 2: xuatds(A,n); system("pause"); break;
			case 3: xuat4(A,n); system("pause"); break;
			case 4: printf("Nhap ma sinh vien can tim: ");
			        fflush(stdin);
			        gets(M);
			        k=search(A,n,M);
			        if(k!=-1){
			        	xuatsearch(A[k]);
			        	system("pause");
					}else {
						printf("\nKhong tim thay!");
					}
					break;
			case 5: sort(A,n); xuatds(A,n); system("pause"); break;		
		}
	}while(chon!=0);
	
}