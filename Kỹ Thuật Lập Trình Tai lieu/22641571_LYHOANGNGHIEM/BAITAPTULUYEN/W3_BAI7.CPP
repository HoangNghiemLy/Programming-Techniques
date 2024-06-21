#include<stdio.h>
#include<math.h> 
int main()
{
	int a,b,c;
	printf("Nhap 3 canh cua tam giac: ");
	scanf("%i%i%i",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a){
		if(a==b&&b==c&&c==a){
			printf("Day la tam giac deu ",a,b,c); 
		}else if(a==c||b==c||a==b){
			printf("Day la tam giac can",a,b,c); 
		} else{
			printf("Day la tam giac thuong ") ;
		} 
	}else{
		printf("Day khong phai la tam giac "); 
	} 
 } 
