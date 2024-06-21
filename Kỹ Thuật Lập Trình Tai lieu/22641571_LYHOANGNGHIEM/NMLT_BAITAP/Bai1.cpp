#include<stdio.h>
int gt(int k){
 	int tich=1;
 	if(k==0 ||k==1) return 1;
 	for(int i=1;i<=k;i++){
 		tich*=i;
	 }
	return tich; 
 }
int main()
{
	int n;
	do{ 
		printf("Nhap n= ");
		scanf("%d",&n);
	}while(n<0);
	printf("%d ",gt(n));
}
