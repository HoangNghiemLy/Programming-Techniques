#include<stdio.h>
#include<math.h>

int demsoluongchusole(int n){
	if(n==0){
		return 0;
	}
	if((n % 10)%2!=0){
		return 1+demsoluongchusole(n/10);
	}
	return demsoluongchusole(n/10);
}
int main(){
	int n=11111;
	int soluong= demsoluongchusole(n);
	printf("\nSo luong chu so le: %d ",soluong);
}