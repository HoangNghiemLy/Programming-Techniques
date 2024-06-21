#include<stdio.h>
void MIN_MAX(int n){
	int min=9, max=0;
	while(n>0){
		int remainder = n%10;
		if(remainder >max)     max=remainder;
		if(remainder<min)      min=remainder;
		n=n/10; 
	} 
	printf("So lon nhat la: %d\n",max);
	printf("So nho nhat la: %d",min); 
} 
int main(){
	int n;
	do{
		printf("Nhap so nguyen: ");
		scanf("%d",&n); 
	} while(n<0);
	MIN_MAX(n); 
} 
