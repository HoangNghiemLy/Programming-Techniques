#include<stdio.h>
int main()
{
	int a;
	float sotien; 
	printf("Nhap so dia DVD: ");
	scanf("%d",&a);
	sotien= a*5000; 
	if(a>10){
		sotien =sotien-sotien*0.1;}		
		printf("So tien phai tra la:%f ",sotien ); 
 } 
