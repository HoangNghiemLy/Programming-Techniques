#include<stdio.h>
int main()
{
	printf("***CHUONG TRINH DOI TIEN THEO MENH GIA***");
	int sotien; 
	int to50,to20,to10,to5,to1,sodu;
	printf("\nNhap so tien: ");
	scanf("%d",&sotien) ;
	to50=sotien/50;
	sodu = sotien%50 ;
	to20=sodu/20;
	sodu %=20;
	to10=sodu/10;
	sodu %=10;
	to5=sodu/5;
	to1=sodu%5; 
	printf("%d to 50\n ",to50);
	printf("%d to 20\n ",to20);
	printf("%d to 10\n ",to10);
	printf("%d to 5\n ",to5);
	printf("%d to 1\n ",to1); 	  	 	 	 	 
	 
 } 
