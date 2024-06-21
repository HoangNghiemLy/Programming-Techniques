#include <stdio.h>
int  main()
{ 
	int ar[]={10,15,4,25,3,-4},*p, i;
	p=&ar[2];
	printf("Cac gia tri cua mang: \n\n");
	for(i=0;i<6;i++)printf("ar[%d]=%4d \n",i,ar[i]);
	printf("\nCho biet gia tri cua cac bieu thuc \n\n");
	printf("a) *(p+1)= %d\n\n",*(p+1));
	printf("b) p[-1]= %d\n\n",p[-1]);
	printf("c) (ar-p)=%d\n\n",(ar-p));
	printf("d) ar[*p++]=%d\n\n",ar[*p++]);
	printf("e) *(ar+ar[2])=%d \n\n",*(ar+ar[2]));
}
//cac gia tri cua mang: ar[0]=10; ar[1]=15; ar[2]=4; ar[3]=25; ar[4]=3; ar[5]=-4
//cho biet gia tri cua cac bieu thuc: a=25; b=15; c=-2; d=3; e=3
