#include<stdio.h>
int tinhtong(int k)
{   int b;
	int tinhtong=0;
	while(k!=0){
		
	b=k%10;
    k=k/10;
	tinhtong+=b;	
}
return tinhtong;	
}
int main()
{
	int a;
	printf("Nhap gia tri cua a: ");
	scanf("%d",&a);
	printf("Tong la %d",tinhtong(a));

}

