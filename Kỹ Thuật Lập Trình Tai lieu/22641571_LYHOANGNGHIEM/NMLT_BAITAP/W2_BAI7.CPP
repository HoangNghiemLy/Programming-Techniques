#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("\nNhap so a co 3 chu so = "); scanf("%3i",&a);
	printf("\nNhap so b co 3 chu so = "); scanf("%3i",&b); 
	printf("%6i\n",a);
	printf("x%5i\n",b);
	printf("-------- \n");
	printf("%6i",a*(b%10));
	printf("\n%5i",(b/10)%10*a);
	printf(" \n%4i ",b/100*a); 
	printf("\n--------");
	printf(" \n%d",a*b);
	
	
	
}
