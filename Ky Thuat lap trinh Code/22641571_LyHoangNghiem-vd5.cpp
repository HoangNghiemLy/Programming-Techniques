#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int q[1000];
int n;
void Nhapmang(int q[],int &n){
	do{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d",&n);
	}while (n<0);
	srand(time(NULL));
	for(int i=0;i<n;i++){
		q[i]=rand() % 100;
	}
}
void Xuatmang(int q[],int n){
	printf("Mang duoc xuat ngau nhien la: ");
	for(int i=0;i<n;i++){
		printf("%d ",q[i]);
	}
}
int DeQuyTongMang(int sum,int q[],int n){
	if(n==0){
		return sum;
	}else{
		return DeQuyTongMang(sum+q[n-1],q,n-1);
	}
}
int DeQuyMaxMang(int max, int q[],int n){
	if(n==1){
		return max;
	}else {
		return q[n-1]>max?DeQuyMaxMang(q[n-1],q,n-1):DeQuyMaxMang(max,q,n-1);
	}
}
int DeQuyMinMang(int min,int q[],int n){
	if(n==0){
		return min;
	}else {
		return q[n-1]<min?DeQuyMinMang(q[n-1],q,n-1):DeQuyMinMang(min,q,n-1);
	}
}


	

int main()
{
    int q[1000],n;
	Nhapmang(q,n);
	Xuatmang(q,n);
	printf("\nTong mang = %d",DeQuyTongMang(0,q,n));
	printf("\nMax trong mang la: %d",DeQuyMaxMang(q[0],q,n));
	printf("\nMin trong mang la: %d",DeQuyMinMang(q[0],q,n));
}

