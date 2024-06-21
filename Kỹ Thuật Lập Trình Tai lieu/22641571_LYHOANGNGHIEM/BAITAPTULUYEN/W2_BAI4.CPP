#include<stdio.h>
#include<math.h>
int main()
{
	float canh1, canh2, s,canhhuyen ;
	printf("Nhap 2 canh vuong cua tam giac vuong=  ");   scanf("%f%f",&canh1,&canh2);
	canhhuyen=sqrt(pow((canh1),2)+pow((canh2),2));    printf("Canh huyen = %.4f",canhhuyen); 
	s= (canh1*canh2)/2;  printf("Dien tich = %.4f",s); 
 } 
