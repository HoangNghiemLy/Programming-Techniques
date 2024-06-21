#include<bits/stdc++.h>
int minmax(int a,int b){
	int max=a;
	if(a>b){
		max=a;
	}else{
		max=b;
	}
}
int main(){
	int a,b;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("\nNhap b: ");
	scanf("%d",&b);
	printf("Max = %d",minmax(a,b));
}