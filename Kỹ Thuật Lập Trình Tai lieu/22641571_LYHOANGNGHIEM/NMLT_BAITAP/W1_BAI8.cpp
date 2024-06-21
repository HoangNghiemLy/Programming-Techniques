#include<stdio.h>
int main()
{
	printf("CHUYEN THANH GIO PHUT GIAY ");
	float s;  
	int H,M,S; 
	printf("\nNhap so giay: "); 
	scanf("%f",&s); 
	H=s/3600;
	M=(s-(H*3600))/60;
	S=s-(H*3600+M*60);
	printf("There are:\nH:M:S - %d:%d:%d",H,M,S);
	
}
