#include<stdio.h>
int main()
{
	float a;
	printf("Nhap nhiet do: ");
	scanf("%f",&a);
	if(a<0){
		printf("Freezing weather ",a); 
	} else if(a>=0&&a<10){
		printf("Verty Cold weather ",a); 
	} else if(a>=10&&a<20){
		printf("Cold weather ",a); 
	} else if (a>=20&&a<30){
		printf("Normal in Temp",a); 
	} else if (a>=30&&a<40) {
		printf("Its Hot",a); 
	}else{
		printf("Its Very Hot",a); 
	} 
 } 
