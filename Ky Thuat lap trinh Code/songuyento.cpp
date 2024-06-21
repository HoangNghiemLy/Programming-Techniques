#include<bits/stdc++.h>
bool isprime(int n){
	if(n<2){
		return false;
	}
	int i=2;
	while(i*i<=n&&n%i!=0)
	   i++;
	if(n%i==0){
		return false;
	}
	return true;
}
int main(){
	int n;
	printf("Nhap so: ");
	scanf("%d",&n);
	if(isprime(n)==true){
		printf(" La so nguyen to");
	}else{
		printf(" Khong phai so nguyen to");
	}
}