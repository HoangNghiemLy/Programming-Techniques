#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int q[1000],n;
void Nhapmang(int q[],int &n){
	do{
		printf("Nhap so luong phan tu mang: ");
		scanf("%d",&n);
	}while(n<0);
	srand(time(NULL));
	for(int i=0;i<n;i++){
		q[i]=rand()% 100;
	}
}
void Xuatmang(int q[],int n){
	printf("Mang vua nhap la: ");
	for(int i=0;i<n;i++){
		printf(" % d ",q[i]);
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



int Maxmang(int max,int q[],int n){
	if(n==1){
		return max;
	}
	else {
		return q[n-1]>max?Maxmang(q[n-1],q,n-1):Maxmang(max,q,n-1);
	}
}
int Minmang(int min,int q[],int n){
	if(n==0){
		return min;
	}
	else {
		return q[n-1]<min?Minmang(q[n-1],q,n-1):Minmang(min,q,n-1);
	}
}


int main(){
	int q[1000],n;
	Nhapmang(q,n);
	Xuatmang(q,n);
	printf("\nTong mang: %d ",Tongmang(0,q,n));
	printf("\nMax trong mang la: %d ",Maxmang(q[0],q,n));
	printf("\nMin trong mang la: %d ",Minmang(q[0],q,n));
} 
