#include<stdio.h>
int main()
{
	printf("***CHUONG TRINH TINH SO CHAN LE SO KHONG***");
	int a;
	printf("\nNhap so a = "); scanf("%d",&a);
	if(a%2==0){
		printf("Day la so chan ",a); 
	}else if(a==0){
		printf("Day la so khong ",a); 
	}else {
		printf("Day la so le ",a); 
	} 
 } 
