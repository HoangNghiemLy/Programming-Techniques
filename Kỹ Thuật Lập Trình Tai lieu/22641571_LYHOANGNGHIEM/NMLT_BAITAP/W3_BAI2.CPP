#include<stdio.h>
int main()
{
	int a,b;
	printf("Nhap 2 so a va b: ");   scanf("%d%d",&a,&b);
	if(a%b==0 && b||0){
		printf("%d la uoc so cua %d",b,a);
	}else 
		printf("%d khong phai la uoc so cua %d",b,a);
	
}
