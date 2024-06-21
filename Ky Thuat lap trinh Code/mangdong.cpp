#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i;
	
	do{
		printf("Nhap so luong truong tiem chung: ");
		scanf("%d",&n);
	}while(n<=0);
	int *A=(int*)malloc(n*sizeof(int));
	if(A==NULL){
		printf("\nERROR");
		free(A);
		return 1;
	}
	for(i=0;i<n;i++){
		printf("Nhap so luong tre tiem chung cua truong thu %d: ",i+1);
		scanf("%d",&A[i]);
	}
	int sum=0;
	float av;
	for(i=0;i<n;i++){
		sum+=A[i];
	}
	av=(float)sum/n;
	printf("Tong so luong tre tiem chung:%d\n",sum);
	printf("Trung binh:%.2f\n",av);
}