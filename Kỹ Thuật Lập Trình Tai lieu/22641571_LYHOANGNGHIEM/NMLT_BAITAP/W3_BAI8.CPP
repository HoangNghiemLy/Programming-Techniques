#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Nhap do dai 3 canh a,b va c: ");   scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a){
		if(a==b&&b==c&&c==a){
			printf("day la tam giac deu ");
		}else if( a==b|| b==c|| a==c){
			printf("day la tam giac can ");
		}else {
			printf("day la tam giac thuong ");
		}
	}else{
		printf("Day khong phai la tam giac ");
	}
}
