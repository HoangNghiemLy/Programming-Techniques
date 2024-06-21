#include<stdio.h> 
int main()
{
	printf("***CHUONG TRINH TINH SO DAO NGUOC***");
	int n, donvi,chuc, tram,m;
	printf("\nNhap vao so n co 3 chu so: ");
	scanf("%d",&n);
	donvi=n%10;
	chuc=(n/10)%10;
	tram=n/100;
	m=donvi*100+chuc*10+tram;
	printf("So dao nguoc cua %d la: %d\n",n,m); 
 } 
