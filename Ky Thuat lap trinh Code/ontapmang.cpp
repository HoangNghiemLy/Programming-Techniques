#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int q[1000];
int n;
menu(){
	printf("\n---CHUONG TRINH NGAU NHIEN MANG---\n");
	printf("\n1. Nhap va xuat mang ");
	printf("\n2. Tinh tong mang ");
	printf("\n3. Max mang ");
	printf("\n4. Min mang ");
}
void Nhapmang(int q[],int &n){
	do{
		printf("Nhap so luong phan tu cua mang: ");
		scanf("%d",&n);
	}while(n<0);
	srand(time(NULL));
	for(int i=0;i<n;i++){
		q[i]=rand() % 100;
	}
}
void Xuatmang(int q[],int n){
	printf("Mang xuat ngau nhien la: ");
	for(int i=0;i<n;i++){
		printf(" %d ",q[i]);
	}
}
int Tongmang(int sum,int q[],int n){
	if(n==0){
		return sum;
	}else {
		return Tongmang(sum+q[n-1],q,n-1);
	}
}
int Maxmang(int max,int q[],int n){
	if(n==1){
		return max;
	}else{
		return q[n-1]>max?Maxmang(q[n-1],q,n-1):Maxmang(max,q,n-1);
	}
}
int Minmang(int min,int q[],int n){
	if(n==0){
		return min;
	}else{
		return q[n-1]<min?Minmang(q[n-1],q,n-1):Minmang(min,q,n-1);
	}
}
int main(){
	int q[1000];
	int n;
	int chon;
	menu();
	do{
		printf("\nchon chuc nang, chon 0 de thoat: ");
		scanf("%d",&chon);
		switch(chon){
			case 1: Nhapmang(q,n), Xuatmang(q,n);  break;
			case 2: printf("Tong mang la: %d ",Tongmang(0,q,n));  break;
			case 3: printf("Max mang la: %d ",Maxmang(q[0],q,n));  break;
			case 4: printf("Min mang la: %d ",Minmang(q[0],q,n));  break;
		}
	}while (chon !=0);

}
