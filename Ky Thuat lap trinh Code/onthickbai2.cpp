#include<stdio.h>
#include<stdlib.h>
int main(){
	int dem=0;
	int dem1=0;
	int n,m;
	int *A=(int*)malloc(n*sizeof(int));
	int*B=(int*)malloc(n*sizeof(int));
	do{
		printf("Nhap so luong sinh vien lop DHTH16A: ");
		scanf("%d",&n);
	}while(n<=0);
	for(int i=0;i<n;i++){
		printf("Nhap diem cua sinh vien thu %d: ",i+1);
		scanf("%d",&A[i]);
		if(A[i]>=8){
			dem++;
		}
	}
	do{
		printf("Nhap so luong sinh vien lop DHTH16B: ");
		scanf("%d",&m);
	}while(m<=0);
	for(int i=0;i<m;i++){
		printf("Nhap diem cua sinh vien thu %d: ",i+1);
		scanf("%d",&B[i]);
		if(B[i]>=8){
			dem1++;
		}
	}
	printf("So sinh vien co diem thi cua lop DHTH16A co diem >=8: %d\n ",dem);
	printf("So sinh vien co diem thi cua lop DHTH16B co diem >=8: %d\n",dem1);
	free(A);
	free(B);
	
}