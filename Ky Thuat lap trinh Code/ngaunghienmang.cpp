#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int q[1000];
int n;
void Nhapmang(int q[],int &n){
	do{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d",&n);
	}while(n<0);
	srand(time(NULL));
	for(int i=0;i<n;i++){
		q[i]=rand()% 100;
	}
}
void Xuatmang(int q[],int n){
	printf("Mang duoc xuat ngau nhien: ");
	for(int i=0;i<n;i++){
		printf(" %d ",q[i]);
	}
}
int Tongmang(int sum,int q[],int n){
	if(n==0){
		return sum;
	}
	else {
		return Tongmang(sum+q[n-1],q,n-1);
	}
}
int Maxmang(int max, int q[],int n){
	if(n==1){
		return max;
	}
	else {
		return q[n-1]>max?Maxmang(q[n-1],q,n-1):Maxmang(max,q,n-1);
	}
}
int Minmang(int min, int q[], int n){
	if(n==0){
		return min;
	}
	else {
		return q[n-1]<min?Minmang(q[n-1],q,n-1):Minmang(min,q,n-1);
	}
}
int main(){
	int q[1000], n;
	Nhapmang(q,n);
	Xuatmang(q,n);
	printf("\nTong mang: %d ",Tongmang(0,q,n));
	printf("\nMax mang: %d ",Maxmang(q[0],q,n));
	printf("\nMin mang:%d ",Minmang(q[0],q,n));
}
