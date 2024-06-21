#include<stdio.h>
#include<math.h> 
int main()
{
	int a,b,c;
	float delta,x1,x2,x0; 
	printf("Nhap gia tri cua a, b va c: ");
	scanf("%i%i%i",&a,&b,&c);
	delta= pow(b,2)-(4*a*c);
	if(delta>0){
		x1= (-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("Phuong trinh co 2 nghiem phan biet x1=%f x2=%f",x1,x2); 
	}else if (delta==0){
		x0=-b/(2*a);
		printf("Phuong trinh co nghiem kep x0=%f",x0); 
	}else{
		printf("Phuong trinh vo nghiem "); 
	} 
	 
	 
 } 
