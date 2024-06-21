#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Nhap vao 3 so : ");   scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c){
		printf("%d la so lon nhat",a);
		
	}else if(b>c&&b>a){
		printf("%d la so lon nhat",b);
	}else{
		printf("%d la so lon nhat",c);
	}
}
