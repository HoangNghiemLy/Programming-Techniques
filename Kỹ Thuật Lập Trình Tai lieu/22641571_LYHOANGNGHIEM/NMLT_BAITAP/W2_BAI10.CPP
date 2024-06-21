#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch,ch1;
	printf("\nNhap mot ki tu thuong ( a->z): "); scanf("%c",&ch);
	ch=toupper(ch);
	printf("IN HOA: %c",ch);
    fflush(stdin);
	printf("\nNhap mot ki tu IN HOA ( a->z): "); scanf("%c",&ch1);
	ch1=tolower(ch1);
	printf("in thuong: %c",ch1); 
} 

