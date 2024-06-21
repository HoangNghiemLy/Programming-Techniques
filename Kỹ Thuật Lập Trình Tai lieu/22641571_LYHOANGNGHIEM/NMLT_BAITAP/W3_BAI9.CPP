#include<stdio.h>
int main()
{
	float giavon,giaban;
	printf("Nhap gia von va gia ban: ");   scanf("%f%f",&giavon,&giaban);
    float x=giaban-giavon;
    if(x>0){
    	printf("ng nay lai %f phantram",x/giavon*100);
	}else{
		int c=giavon-giaban;
		printf("ng nay lo %f phantram",c/giavon*100);
	}

}
