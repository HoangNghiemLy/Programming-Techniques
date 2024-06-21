#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100
#include<conio.h>
struct SINHVIEN{
	char HOTEN[40],MSSV[20];
	float DiemTK,DiemGK,DiemCK,DiemTH,DiemTB;
};
void Nhap1SV(SINHVIEN &sv){
	printf("\nNhap ho ten sinh vien: ");
    fflush(stdin);
	gets(sv.HOTEN);
	printf("Nhap MSVV: ");
	scanf("%s",&sv.MSSV);
	printf("Diem thuong ki: ");
	scanf("%f",&sv.DiemTK);
	printf("Diem giua ki: ");
	scanf("%f",&sv.DiemGK);
	printf("Diem cuoi ki: ");
	scanf("%f",&sv.DiemCK);
	printf("Diem thuc hanh: ");
	scanf("%f",&sv.DiemTH);
	sv.DiemTB=(((2*sv.DiemTK+3*sv.DiemGK+5*sv.DiemCK)/10)*2+sv.DiemTH)/3;
	printf("Diem trung binh: %.2f\n ",sv.DiemTB);
} 
void NhapDS(SINHVIEN A[],int n){
	printf("Nhap so luong sinh vien: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\nNhap sinh vien thu %d: ",i+1);
		Nhap1SV(A[i]);
	}
}
void Xuat1SV(SINHVIEN sv){
	printf("%-30s | %-8s | %4.1f | %4.1f | %4.1f | %4.1f | %5.2f",sv.HOTEN,sv.MSSV,sv.DiemTK,sv.DiemGK,sv.DiemCK,sv.DiemTH,sv.DiemTB);
}
void Xuat2(SINHVIEN sv){
	printf("\nHo ten sinh vien: %s "); puts(sv.HOTEN);
	printf("Ma so sinh vien: %s ",sv.MSSV);
	printf("\nDiem Thuong ki: %f ",sv.DiemTK);
	printf("\nDiem giua ki: %f ",sv.DiemGK);
	printf("\nDiem cuoi ki: %f ",sv.DiemCK);
	printf("\nDiem thuc hanh: %f ",sv.DiemTH);
	printf("\nDiem trung binh: %.2f\n",sv.DiemTB);
}
void XuatDS(SINHVIEN A[],int n){
	printf("\n---DANH SACH SINH VIEN---\n");
	printf("\n| STT |            HO TEN         |  MA SV  | TK | GK | CK | TH | DTB | ");
	for (int i=0;i<n;i++){
		printf("\n| %3d | ",i+1);
		Xuat1SV(A[i]);
	}
}
void XuatDS4(SINHVIEN A[], int n ){
	int d=0;
	printf("\n---DANH SACH SINH VIEN CO DTB<4.0---\n");
	printf("\n| STT |            HO TEN         |  MA SV  | TK | GK | CK | TH | DTB | ");
	for (int i=0;i<n;i++){
		if(A[i].DiemTB<4.0){
			d++;
			printf("\n| %3d | ",d);
			Xuat1SV(A[i]);
		}	
	}
}
int Search(SINHVIEN A[],int n,char M[]){
	int i=0;
	while(i<n && strcmp(A[i].MSSV,M))  i++;
	if(i<n)  return i;
	return -1;
}
int Sort(SINHVIEN A[],int n){
	int i,j;
	SINHVIEN t;
	for(int i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(A[i].DiemTB<A[j].DiemTB){
				t=A[i];
				A[i]=A[j];
				A[j]=t;
			}
		}
	}
}
void Menu(){
	printf("\n---CHUONG TRINH QUAN LI SINH VIEN---\n");
	printf("\n1. Nhap danh sach sinh vien: ");
	printf("\n2. Xuat danh sach sinh vien co DTB<4.0: ");
	printf("\n3. Tim thong tin sinh vien theo ma sinh vien: ");
	printf("\n4. Sap xep DSSV giam dan theo DTB: ");
}
int main(){
	int n,k,chon;
	char M[100];
	SINHVIEN A[MAX];
	do{
		Menu();
		printf("\nChon chuc nang, chon 0 de thoat: ");
		scanf("%d",&chon);
		switch(chon){
			case 1: NhapDS(A,n) , XuatDS(A,n);  break;
			case 2: XuatDS4(A,n);  break;
			case 3: printf("Nhap ma sinh vien can tim: ");
			        fflush(stdin);
			        gets(M);
			        k=Search(A,n,M);
			        if(k!=-1)  Xuat2(A[k]);
			        else printf("Khong co"); break;
			case 4: Sort(A,n);  XuatDS(A,n);        
		}
	}while(chon !=0);
}
