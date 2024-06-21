#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100
struct sinhvien{
	char name[30];
	char masv[20];
	float tk,gk,ck,th,tb;
};
void nhap1(sinhvien &sv){
	printf("Nhap ten sinh vien: ");
	fflush(stdin);
	gets(sv.name);
	printf("Nhap ma sinh vien: ");
	scanf("%s",&sv.masv);
	printf("Nhap diem thuong ki: ");
	scanf("%f",&sv.tk);
	printf("Nhap diem giua ki: ");
	scanf("%f",&sv.gk);
	printf("Nhap diem cuoi ki: ");
	scanf("%f",&sv.ck);
	printf("Nhap diem thuc hanh: ");
	scanf("%f",&sv.th);
	sv.tb = ((2 * sv.tk + 3 * sv.gk + 5 * sv.ck) / 10.0f * 2 + sv.th) / 3.0f;
	printf("Diem trung binh:%.2f\n",sv.tb);
}

void nhapds(sinhvien a[],int &n){
	printf("Nhap so luong sinh vien: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Nhap sinh vien thu %d:\n",i+1);
		nhap1(a[i]);
	}
}
void xuat1(sinhvien sv){
	printf("%-30s | %-8s  |  %4.1f  | %4.1f  |  %4.1f  |  %4.1f  |  %5.2f  |",sv.name,sv.masv,sv.tk,sv.gk,sv.ck,sv.th,sv.tb);
}
void xuatds(sinhvien a[],int n){
	printf("\n          ---DANH SACH SINH VIEN---\n");
	printf("\n| STT |           Ho Ten           |    Ma sinh vien    |    TK    |    GK    |    CK    |    TH    |    TB    | ");
	for(int i=0;i<n;i++){
		printf("\n| %3d | ",i+1);
		xuat1(a[i]);
	}
}
void xuat2(sinhvien sv){
	printf("\nMa sinh vien:%s ",sv.masv); 
	printf("\nHo ten:"); puts(sv.name);
	printf("Diem thuong ki:%.1f",sv.tk);
	printf("\nDiem giua ki: %.1f",sv.gk);
	printf("\nDiem cuoi ki:%.1f",sv.ck);
	printf("\nDiem thuc hanh:%.1f",sv.th);
	printf("\nDiem trung binh:%.2f",sv.tb);
}
int xuatds4(sinhvien a[],int n){
	printf("\n---DANH SACH SINH VIEN CO DTB<4.0---\n");
	printf("\n| STT |            Ho ten             |   MaSV   |  TK |  GK |  CK |  TH |  DTB  |");
	int d=0;
	for(int i=0;i<n;i++){
		if(a[i].tb<4.0){
			d++;
			printf("\n| %3d | ",d);
			xuat1(a[i]);
		}
	}
}
int sort(sinhvien a[],int n){
	int i,j;
	sinhvien t;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i].tb<a[j].tb){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
int search(sinhvien a[],int n,char M[]){
	int i=0;
	while(i<n&&strcmp(a[i].masv,M)) i++;
	if(i<n) return i;
	return -1;
}
void menu(){
	printf("\n---CHUONG TRINH QUAN LY SINH VIEN---\n");
	printf("\n1. Nhap xuat danh sach sinh vien");
	printf("\n2. Danh sach sinh vien co DTB<4.0");
	printf("\n3. Sap xep diem trung binh giam dan");
	printf("\n4. Tim kiem theo MSSV");
}
int main(){
	int chon,k;
	sinhvien a[MAX];
	char M[9];
	int n;
	do{
		menu();
		printf("\nChon chuc nang, chon 0 de thoat: ");
		scanf("%d",&chon);
		switch(chon){
			case 1:nhapds(a,n);
	               xuatds(a,n);
	               break;
	        case 2: xuatds4(a,n); break;
	        case 3: sort(a,n); xuatds(a,n); break;
	        case 4: printf("Nhap ma sinh vien can tim: ");
	                fflush(stdin);
	                gets(M);
	                k=search(a,n,M);
	                if(k!=-1)  xuat2(a[k]);
	                else printf("Khong co sinh vien");  break;
		}
	}while (chon!=0);	
}