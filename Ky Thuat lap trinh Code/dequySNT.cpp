#include<stdio.h>
#include<math.h>
int SNT(int n){
	if(n<0){
		return 0;
	}
	for(int i=0;i<sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int tongSNT(int a[],int n){
	if(n==1){
		if(SNT(a[0])){
			return a[0];
		}else{
			return 0;
		}
	}else{
		int tong=tongSNT(a+1,n-1);
		if(SNT(a[0])){
			tong+=a[0];
		}
		return tong;
	}
	
}
int main(){
	int n;
	int a[100];
	printf("Nhap so phan tu mang: ");
	scanf("%d",&n);
	printf("Nhap cac phan tu cua mang:\n");
	for(int i=0;i<n;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
}
int tong = tongSNT(a,n);
}