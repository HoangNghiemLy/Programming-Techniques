#include<stdio.h>
int main()
{
	char kt;
	printf("Nhap mot ki tu bat ki: ");    scanf("%c",&kt);
	if (kt>=65&&kt<=90){
		printf("%c la chu cai in hoa ");
	} else if(kt>=97&&kt<=122){
		printf("%c la chu cai in thuong ");
	}else if (kt>=48&&kt<=57){
		printf("%c la chu so "); 
	}else {
		printf("%c special symbols");
	}
}
