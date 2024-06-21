#include<stdio.h>
int gcd(int a, int b)
{
	int gdc;
//	if(a==0||b==0) return a+b;
	while(a!=b){
	 if(a>b)  a-=b;
	 else if(b>a)  b-=a;
	 gdc=a;
	}
	return gdc;
	}
	

int lcm(int a, int b)
{
	return a*b/gcd(a,b);
}
int main()
{
	int a,b;
	printf("Nhap 2 so nguyen a va b:  ");
	scanf("%d%d",&a,&b);
	printf("uoc chung lon nhat la %d \n",gcd(a,b));
	printf("boi chung nho nhat la %d ",lcm(a,b));
}
