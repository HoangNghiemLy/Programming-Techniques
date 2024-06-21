#include<stdio.h>
int main()
{
	printf("***CHUONG TRINH TINH PHAN SO, TINH VA IN RA MAN HINH TONG CUA CHUNG***"); 
	int a,b,c,d,e,f;
	printf("\nNhap phan so 1 (a/b): "); 
	scanf("%i/%i",&a,&b); 
	printf("\nNhap phan so 2 (c/d): ");
	scanf("%i/%i",&c,&d); 
	e=a*d+c*b; 
	f=b*d;
	printf("\nThe sum is %i/%i",e,f); 

}
