#include<bits/stdc++.h>
using namespace std;
int tachso(int n){
	int tong = 0;
	int m = 0;
	while(n>0){
		tong = n%10;
		m=(m*10) + tong;
		n=n/10;
	}
	return m;
}
bool ktrasodoixung(int &n){
	if(n==tachso(n)){
		return true;
	}
	return false;
}
int main(){
	int n;
	printf("Moi nhap so: ");
	scanf("%d",&n);
	if(ktrasodoixung(n)==true){
		printf("Yes");
	}else{
		printf("No");
	}
}