#include<stdio.h>
int sumDivisors (int N)
{
	int i,s=0;
	for(i=1;i<N;i++)
	  if (N%i==0) s+=i;
	  return s;
}
int main()
{
	int n,sum;
	printf("\nInput n=");
	scanf("%d",&n);
	sum=sumDivisors(n);
	printf("Result:%d\n",sum);
	getchar();
	getchar();
}
