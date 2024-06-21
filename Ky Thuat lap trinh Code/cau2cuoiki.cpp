#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#define MAX 100
struct loaihoa{
	int maloaihoa;
	char tenhoa [20];
	char mausac [30];
};
void Nhap1loaihoa(loaihoa &h){
	printf("Nhap ma loai hoa: ");
	scanf("%d",&h.maloaihoa);
	printf("Nhap ten hoa: ");
    fflush(stdin);
	gets(h.tenhoa);
	printf("Nhap mau sac: ");
	scanf("%s",h.mausac);
}
void nhapDS(loaihoa A[],int &n){
	do{
		printf("\nNhap so luong hoa: ");
		scanf("%d",&n);
	}while(n<=0);
	for(int i=0;i<n;i++){
		printf("Nhap loai hoa thu %d:\n",i+1);
		Nhap1loaihoa(A[i]);
	}
}
void XuatDS(loaihoa A[],int n){
	printf("\n\Ma loai hoa\   Ten loai hoa \       Mau sac");
	for (int i=0;i<n;i++){
		printf("\n|%4d      | %20s | %30s",A[i].maloaihoa,A[i].tenhoa,A[i].mausac);
	}
}
//int Count(loaihoa A[],int n,char X[] ){
//	int d=0;
//	for(int i=0;i<n;i++){
//		if(!strcmp(A[i].mausac,X))
//		d++;
//	}
//	return d;
//	
//}
int main(){
	int n;
	int i;
	int dem=0;
	char X[100];
    loaihoa A[MAX];
	nhapDS(A,n);
	XuatDS(A,n);
	int max=0;
	char mauphobien[20];
	for( i=0;i<n;i++){
		if(dem[i]>max){
			max=dem[i];
			strcpy(mauphobien,loaihoa[i].mausac);
		}
	}
	printf("mau hoa pho bien nhat la:%s\n",mauphobien);
	
}