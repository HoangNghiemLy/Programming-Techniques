#include<stdio.h>
int main()
{
	char kt;
	printf("Nhap ki tu: ");
	scanf("%c",&kt);
	if(kt>='a'&&kt<='z'){
		printf("Day la chu cai in thuong ",kt); 
	}else if(kt>='A'&&kt<='Z'){
		printf("Day la chu cai in hoa ",kt); 
	} else if(kt>='0'&&kt<='9'){
		printf("Day la chu so ",kt); 
	} else{
		printf("Day la ki tu dac biet",kt); 
	} 
 } 
