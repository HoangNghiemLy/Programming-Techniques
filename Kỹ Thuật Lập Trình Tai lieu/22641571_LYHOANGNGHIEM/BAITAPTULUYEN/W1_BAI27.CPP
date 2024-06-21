#include<stdio.h> 
int main(){
	printf("CHUONG TRINH SO SANH***");
	int a,b; 
	printf("\nNhap 2 so a va b = ");
	scanf("%d%d",&a,&b);
	if(a>b){
		if(a%2==0){
			printf("%d la so chan lon hon %d ",a,b); 
		}else{
			printf("%d la so le nho hon %d ",a,b); 
		} 
	} else if(a==b){
		printf("%d bang %d ",a,b); 
	}else{
		printf("%d nho hon %d ",a,b); 
	} 
}
