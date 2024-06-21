#include<stdio.h>
#include<time.h>
float lai_kep(float y,int n,float x){
	
	if(n==0){
		return y;
	}else {
	
		return lai_kep(y,n-1,x)*(1.0 +x/100);
	}
}
int main(){
	int n;
	float y;
	float x;
	do{
		printf("Nhap phan tram lai suat: ");
		scanf("%f",&x);
	}while(x<0);
	do{
		printf("Nhap so nam gui: ");
	    scanf("%d",&n);
	}while (n<=0);	
	printf("Nhap so tien gui: ");
	scanf("%f",&y);
	printf("so tien von + lai = %f",lai_kep(y,n,x));
}
















