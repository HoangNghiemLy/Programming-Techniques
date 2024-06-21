#include <stdio.h>
#include <math.h>
int calculate_P(int x, int n){
	if(n==1){
		return x;
	}else{
		return pow(x,n)+calculate_P(x,n-1);
	}
}
int main(){
	int x,n;
	printf("Nhap x: "); scanf("%d", &x);
	printf("Nhap n: "); scanf("%d", &n);
	printf("P(n) = %d", calculate_P(x,n));
	return 0;
}
