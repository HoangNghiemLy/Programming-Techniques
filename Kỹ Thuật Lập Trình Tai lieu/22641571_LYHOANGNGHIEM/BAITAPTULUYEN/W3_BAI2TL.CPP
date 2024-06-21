#include<stdio.h>
int main()
{
	int a,b;
	printf("Nhap 2 so a va b: ");
	scanf("%i%i",&a,&b);
	if(a%b==0){
		printf("%i la uoc so cua %i",b,a); 
	}else{
		printf("%i khong phai la uoc so cua %i",b,a); 
	} 
 } 
