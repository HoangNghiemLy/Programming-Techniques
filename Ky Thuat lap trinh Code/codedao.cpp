#include<stdio.h>
int sum(int n){
	if(n%2==0){
		return n;
	}else{
		if(n>1)
		return (n-1)/2-n;
	}
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("%d",sum(n));
}