#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
struct hoa{
	char mahoa[10];
	char tenhoa[20];
	char mausac[30];
};
void nhap(hoa &h){
	printf("\nNhap ma hoa: ");
	scanf("%s",&h.mahoa);
	printf("Nhap ten hoa: ");
	fflush(stdin);
	gets(h.tenhoa);
	printf("Nhap mau sac: ");
	fflush(stdin);
	gets(h.mausac);
}
void nhapb(hoa h){
	printf("%-20s| %-7s | %-7s | ",h.mahoa,h.tenhoa,h.mausac);
}
void nhapds(hoa A[],int &n){
	do{
		printf("\nNhap so luong hoa: ");
		scanf("%d",&n);
	}while(n<=0);
	for(int i=0;i<n;i++){
		printf("Nhap loai hoa thu %d: ",i+1);
		nhap(A[i]);
	}
}
void xuatds(hoa A[],int n){
	printf("\n---DANH SACH HOA---\n");
	printf("\nMA loai hoa   |   Ten loai hoa   |   Mau sac   |");
	for(int i=0;i<n;i++){
		printf("\n");
		nhapb(A[i]);
	}
}
int search(hoa A[],int n,char M[]){
	int i=0;
	while(i<n&&strcmp(A[i].mahoa,M))  i++;
	if(i<n)  return i;
	else return -1;
}
void xuat2(hoa h){
	printf("\nMa loai hoa:%s",h.mahoa);
	printf("\nTen hoa:%s",h.tenhoa);
	printf("\nMau sac:%s",h.mausac);
}
int tinhhoa(hoa A[],int n,char c[]){
	int dem=0;
	for(int i=0;i<n;i++){
		if(strcmp(c,A[i].mausac)==0){
			++dem;
		}
   }

}
void menu(){
	printf("\n---CHUONG TRINH HOA---\n");
	printf("\n1. Them loai hoa");
	printf("\n2. Xem thong tin hoa");
	printf("\n3. Tinh mau hoa");
	printf("\n4. Tim hoa theo ma loai hoa");
}
int main(){
	char M[9];
	int dem=0;
	char c[10];
	hoa A[MAX];
	int n,chon,k,t;
	do{
		system("cls");
		menu();
		printf("\nChon chuc nang, chon 0 de thoat: ");
		scanf("%d",&chon);
		switch(chon){
			case 1: nhapds(A,n); break;
			case 2: xuatds(A,n); system("pause"); break;
			case 3: printf("\nNhap mau hoa can tim: ");
			        fflush(stdin);
			        gets(c);
                    t=tinhhoa(A,n,c);
					if(t!=-1){
						printf("\nCo %d mau hoa cua loai hoa %s trong danh sach",dem,c);
						system("pause");
					}
								       
					break;
			case 4: printf("\nNhap ma loai hoa can tim: ");
			        fflush(stdin);
			        gets(M);
			        k=search(A,n,M);
			        if(k!=-1){
			        	xuat2(A[k]);
			        	system("pause");
					}else{
						printf("\nKhong tim thay hoa");
						system("pause");
					}
					break;
		}
	}while(chon!=0);
}