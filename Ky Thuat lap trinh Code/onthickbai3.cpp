#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
struct nhim{
	char ma[8];
	char ten[16];
	int gia;
	int soluong;
};
void nhap1(nhim &n){
	printf("\nNhap ma nhim: ");
	fflush(stdin);
	gets(n.ma);
	printf("Nhap ten nhim: ");
	gets(n.ten);
	fflush(stdin);
	printf("Nhap gia: ");
	scanf("%d",&n.gia);
	printf("Nhap so luong: ");
	scanf("%d",&n.soluong);
}
void nhapnhieu(nhim A[],int &n){
	do{
		printf("Nhap so luong nhim: ");
		scanf("%d",&n);
	}while(n<=0);
	for(int i=0;i<n;i++){
		printf("Nhap mat hang nhim thu %d: ",i+1);
		nhap1(A[i]);
	}
}
void xuatnhim(nhim n){
	printf("%-15s   |   %-8s   |   %4.1d   |   %4.1d   |",n.ma,n.ten,n.gia,n.soluong);
}
void xuatnhimgiatiencaonhat(nhim A[],int n){
	int max_tien=A[0].gia;
	for(int i=0;i<n;i++){
		if(A[i].gia<max_tien){
			break;
		}
		printf("\n");
		xuatnhim(A[i]);
	}	
}
void xuatnhim1(nhim n){
	printf("Ma nhim: %s",n.ma);
	printf("\nTen nhim: %s",n.ten);
	printf("\nGia: %d",n.gia);
	printf("\nSo luong: %d",n.soluong);
}
int search(nhim A[],int n,char M[]){
	int i=0;
	while(i<n&&strcmp(A[i].ma,M))   i++;
	if(i<n)  return i;
	return -1;
}
int main(){
	int k;
	char M[20];
	int n;
	nhim A[MAX];
	nhapnhieu(A,n);
	xuatnhimgiatiencaonhat(A,n);
	printf("\nNhap ma nhim can tim: ");
	fflush(stdin);
	gets(M);
	k=search(A,n,M);
	if(k!=-1){
		xuatnhim1(A[k]);
	}else{
		printf("\nKhong co nhim can tim");
	}
}