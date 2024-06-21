#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int a[1000];
int n;
void nhapMang(int a[],int &n){
	do{
		printf("Nhap so luong phan tu trong mang: ");
		scanf("%d",&n);
	}while(n<=0);
	srand(time(NULL));

	for(int i=0;i<n;++i){
		 a[i]=rand() % 100;
	}
}
void xuatMang(int a[],int n){
	printf("Mang duoc xuat ngau nhien la: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int deQuyTongMang(int sum,int a[],int n){
	if(n==0) return sum;
	else return deQuyTongMang(sum+a[n-1],a,n-1);
}
int deQuyMaxMang(int max,int a[],int n){
	if(n==1) return max;
	
	else{
		if(a[n-1]>max) return deQuyMaxMang(a[n-1],a,n-1);
		else return deQuyMaxMang(max,a,n-1);
	}
}
int tongFor(int a[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum += a[i];
	}
	return sum;
}
int maxMangFor(int a[],int n){
	int max = -1e9;
	for(int i=0;i<n;i++){
		if(a[i]>max) max = a[i];
	}
	return max;
}
void doThoiGianTongMnagDeQuy(int a[],int n){
	clock_t start = clock(); 
	deQuyTongMang(0,a,n);
	clock_t end = clock();
	printf("Time tong mang de quy = %.2f s\n",(float)(end - start)/100);
}
void doThoiGianTongFor(int a[],int n){
	clock_t start = clock(); 
	tongFor(a,n);
	clock_t end = clock();
	printf("Time tong mang for = %.2f s\n",(float)(end - start)/100);
}
int main(){
	int luachon;
	while(1){
		system("cls");
		printf("\n\n\t\t============ MENU ===============");
		printf("\n\t1.Nhap mang ngau nhien.");
		printf("\n\t2.Xuat mang.");
		printf("\n\t3.Tinh tong mang.");
		printf("\n\t4.Tim max mang.");
		printf("\n\t5.so sanh thoi gian for va de quy tinh tong");
		printf("\n\n\t\t============ end ==============\n");
		printf("\tNhap lua chon ma ban muon (nhap 0 de thoat): ");
		scanf("%d",&luachon);
		if(luachon==1){
			nhapMang(a, n);
			printf("Da xuat mang ngau nhien theo yeu cau!!\n");
			system("pause");
		}
		else if(luachon==2){
			xuatMang(a, n);
			printf("\n");
			system("pause");
		}
		else if(luachon==3){
			printf("Tong cua mang: %d\n",deQuyTongMang(0,a,n));
			system("pause");
		}
		else if(luachon==4){
			printf("Max = %d\n",deQuyMaxMang(a[0],a,n));
			system("pause");
		}
		else if(luachon==5){
			doThoiGianTongFor(a, n);
			doThoiGianTongMnagDeQuy(a, n);
			system("pause");
		}
		else if(luachon==0){
			printf("Thoat!\n");
			break;
		}
		else{
			printf("Nhap lua chon khong hop le!!\n");
			system("pause");
		}
	}
}
