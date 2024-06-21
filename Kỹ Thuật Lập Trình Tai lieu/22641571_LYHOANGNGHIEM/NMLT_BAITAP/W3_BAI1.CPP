#include<stdio.h>
int main()
{
	float kq, soluong;
	printf("Nhap vao so luong: ");
	scanf("%f",&soluong);
	kq=soluong*5000;
	if(soluong>10){
		kq=kq-kq*0.1;
	}
	printf("So tien tra = %f ",kq);
    return 0;
}
