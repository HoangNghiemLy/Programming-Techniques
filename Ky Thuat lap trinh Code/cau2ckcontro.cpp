#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	float *A;
	int n;
	printf("Nhap so luong vdv: ");
	scanf("%d",&n);
    A=(float*)malloc(n* sizeof(float));
	if(A==NULL){
		printf("Khong the cap phat bo nho\n");
		exit (0);
	}
	for (int i=0;i<n;i++){
        float kq;
		do{
			printf("Nhap ket qua thi dau cua vdv: ");
			scanf("%f",&kq);
		}while(kq<0||kq>10);
	}
	printf("Ket qua thi dau cua vdv: ");
	for (int i=0;i<n;i++){
		if(A[i]>=9){
			printf("Vdv %d dat huy chuong vang\n",i+1);
		}else if(A[i]>=7.5){
			printf("vdv %d dat huy chuong bac\n",i+1);
		}else if(A[i]>=6.5){
			printf("vdv %d dat huy chuong dong\n",i+1);
		}
	}
	free(A);
	return 0;
}