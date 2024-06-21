#include <stdio.h>
int main() 
{	int a[10],*pa,x;
 	a[0]=11; a[1]=22; a[2]=33; a[3]=44; 
 	pa=&a[0]; 
 	x=*pa;		printf ("1. x = %d",x);
  	pa++; 
	x=*pa; 		printf ("\n2. x = %d",x);
	x=*pa+1; 	printf ("\n3. x = %d",x);
	x=*(pa+1); 	printf ("\n4. x = %d",x);
	x=*++pa; 	printf ("\n5. x = %d",x);
	x=++*pa; 	printf ("\n6. x = %d",x);
	x=*pa++; 	printf ("\n7. x = %d",x);
	x=*pa;		printf ("\n8. x = %d\n",x);
	return 0;
} 
