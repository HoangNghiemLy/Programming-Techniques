#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,j;
	float temp;
	do{
		printf("Nhap so luong vdv: ");
		scanf("%d",&n);
	}while(n<=0);
	float *A=(float*)malloc(n*sizeof(float));
	if(A==NULL){
		printf("\nError!");
		free(A);
		return 1;
	}
	
	for(i=0;i<n;i++){
		do{
			printf("Nhap ket qua cua vdv thu %d: ",i+1);
		    scanf("%f",&A[i]);
		}while(A[i]<0||A[i]>10);
		
		if(A[i]<0){
			printf("So luong vdv khong hop le!\n");
			free(A);
			return 1;
		}
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(A[i]<A[j]){
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
	printf("\nKET QUA:\n");
	printf("Huy chuong vang:%.2f\n",A[0]);
	printf("Huy chuong bac:%.2f\n",A[1]);
	printf("Huy chuong dong:%.2f\n",A[2]);
}