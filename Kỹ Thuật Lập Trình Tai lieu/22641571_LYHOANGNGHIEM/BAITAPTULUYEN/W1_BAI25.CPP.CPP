#include<stdio.h> 
int main(){
	printf("***CHUONG TRINH SO AM DUONG CHAN LE***");
	int a;
	printf("\nNhap so a = ");
	scanf("%d",&a); 
	if(a>0){
		if(a%2==0){
			printf("Day la so duong chan "); 
		}else{
			printf("Day la so duong le "); 
		} 
	}else if(a<0){
		if(a%2==0){
			printf("Day la so am chan "); 
		}else{
			printf("Day la so am le "); 
		} 
	} 
} 
