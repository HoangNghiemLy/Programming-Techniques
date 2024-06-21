#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#define MAX 100
struct sinhvien{
	char name[30];
	char masv[30];
	float diemtk,diemgk,diemck,diemth,diemtb;
};
void nhap1(sinhvien &sv){
	printf("Nhap ten sinh vien: ");
	fflush(stdin);
	gets(sv.name);
	printf("Ma sinh vien: ");
	scanf("%s",&sv.masv);
	printf("Diem thuong ki: ");
	scanf("%f",&sv.diemtk);
	printf("Diem giua ki: ");
	scanf("%f",&sv.diemgk);
	printf("Diem cuoi ki: ");
	scanf("%f",&sv.diemck);
	printf("Diem thuc hanh: ");
	scanf("%f",&sv.diemth);
	sv.diemtb=((((2*sv.diemtk+3*sv.diemgk+5*sv.diemck)/10.0f)*2)+sv.diemth)/3.0f;
	printf("Diem trung binh:%.2f\n ",sv.diemtb);
}
void nhapds(sinhvien a[],int &n){
		printf("\nNhap so luong sinh vien: ");
		scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Nhap sinh vien thu %d:\n ",i+1);
		nhap1(a[i]);
	}
}
void xuat1(sinhvien sv){
	    printf("%-30s | %-8s |  %4.1s  |  %4.1s  |  %4.1s  |  %4.1s  |  %5.2s  | ",
		     sv.name,sv.masv,sv.diemtk,sv.diemgk,sv.diemck,sv.diemtb);
}
void xuatds(sinhvien a[],int n){
	printf("\n---DANH SACH SINH VIEN---\n");
	printf("\n| STT |            Ho ten             |   MaSV   |   TK   |   GK  |   CK  |   TH  |   DTB  |");
	for(int i=0;i<n;i++){
		printf("\n| %3d |",i+1);
		xuat1(a[i]);
	}
}
int sort(sinhvien a[],int n){
	sinhvien t;
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i].diemtb<a[j].diemtb){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
int search(sinhvien a[],int n,char M){
	int i=0;
	while(i<n&&strcmp(a[i].masv),M) i++;
	if(i<n) return i;
	return -1;
	
}
int sort(sinhvien a[],int n){
	sinhvien t;
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i].diemtb<a[j].diemtb){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
int search(sinhvien a,int n,char M){
	int i=0;
	while(i<n&&strcmp(a[i].masv,M)) i++;
	if(i<n) return i;
	return -1;
}
void (sinhvien a[],int n){
	int d=0;
	for(int i=0;i<n;i++){
		if(a[i].diemtb<4.0){
			d++;
			printf("| %3d | ",a[i]);
			xuat1(sv);
		}
	}
}
int main(){
	sinhvien a[MAX];
	int n;
	nhapds(a,n);
    xuatds(a,n);
}
