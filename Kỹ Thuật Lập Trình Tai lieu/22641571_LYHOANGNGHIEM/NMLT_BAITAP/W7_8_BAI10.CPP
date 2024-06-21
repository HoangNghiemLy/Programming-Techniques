#include<stdio.h>
#include<math.h> 
int giaithua(int n){
	int gt=1;
	for (int i=1;i<=n;i++){
		gt*=i; 
	} 
	return gt; 
} 
float emux(float x,int n){
	float s=0;
	for(int i=0;i<=n;i++ ){
		s+=pow(x,i)/giaithua(i); 
	} 
	return s; 
} 
int main(){
	int n;
	float x;
	printf("Nhap so nguyen: ");
	scanf("%d",&n);
	printf("Nhap so thuc: ") ;
	scanf("%f",&x);
	printf("Taylor = %.2f",emux(x,n)); 
} 
