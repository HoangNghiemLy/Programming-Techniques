#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Nhap 3 so a,b va c: ");
	scanf("%i%i%i",&a,&b,&c);
	if(a>b){
		printf("%i la so lon nhat",a); 
	}else if(b>c){
		printf("%i la so lon nhat",b); 
	} else{
		printf("%i la so lon nhat",c); 
	} 
 } 
