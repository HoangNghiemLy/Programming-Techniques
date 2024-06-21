#include<stdio.h> 
int main()
{
	printf("***CHUONG TRINH DIEU KIEN***");
	int a,b;
	printf("\nNhap 2 so a va b = ");
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("%d lon hon %d ",a,b); 
	}else if (a==b){
		printf("%d bang %d ",a,b); 
	}else{
		printf("%d nho hon %d ",a,b); 
	}  
	}    
	 
