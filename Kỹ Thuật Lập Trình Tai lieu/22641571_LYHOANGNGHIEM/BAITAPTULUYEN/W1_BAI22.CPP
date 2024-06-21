#include<stdio.h>
int main(){
	int a;
	printf("\nNhap so a= ");
	scanf("%d",&a);
	if(a>0){
	if(a%2==0){
		printf("Day la so duong chan ",a); 
	} else{
		printf("Day la so duong le ",a); 
	} 
    } else if(a==0){
	printf("Day la so 0 ",a); 
}else{
	if(a%2==0){
		printf("Day la so am chan ",a); 
	} else{
		printf("Day la so am le ",a); 
	} 
}
}
	 

