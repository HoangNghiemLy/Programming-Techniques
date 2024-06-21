#include<stdio.h>
int isPrime(int n)
{
	for(int i=2;i<=n/2;i++)
	   if(n%i==0)
	   return 1;
}
int main()
{
	int n;
	do
	{
		printf("Nhap so nguyen duong:");
		scanf("%d",&n);
	}
	while (n<=0);
	if(isPrime(n))
	    printf("%d la so nguyen to\n",n);
	else 
	    printf("%d khong phai la so nguyen to\n",n);
		return 0;    
	    
}
