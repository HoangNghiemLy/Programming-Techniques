#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct thuvien{
	char masach[10];
	char tensach[20];
	char tacgia[20];
	char ngaynhap[11];
};
void nhap1(thuvien &h){
	printf("Nhap ma sach: ");
	gets(h.masach);
	printf("Nhap ten sach: ");
	gets(h.tensach);
	printf("Nhap tac gia: ");
	gets(h.tacgia);
	printf("Ngay nhap: ");
	gets(h.ngaynhap);
}
void xuat1(thuvien h){
	printf("\nThong tin sach");
	printf("\nMa sach:%s",h.masach);
	printf("\nTen sach:%s",h.tensach);
	printf("\nTac gia:%s",h.tacgia);
	printf("\nNgay nhap:%s",h.ngaynhap);
}
int main(){
	thuvien h;
	nhap1(h);
	xuat1(h);
}