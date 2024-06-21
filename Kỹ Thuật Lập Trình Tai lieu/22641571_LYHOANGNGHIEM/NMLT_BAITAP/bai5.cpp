#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main()
{
	int a;
	do{	printf("Nhap so nguyen duong a: ");
    	scanf("%d",&a);
	}while(a<2);
	printf("Cac so nguyen to :");
	for(int i=2;i<=a;i++){
		if(isPrime(i)) printf("%d ",i);
	}

}
