#include<stdio.h>
#include<stdlib.h>
int main(){
	int tichA=1,tichB=1;
	int n,m;
	int *A=(int*)malloc(m*sizeof(int));
	int *B=(int*)malloc(n*sizeof(int));
	do{
		printf("Nhap so luong phan tu cua mang A:");
	    scanf("%d",&m);
	}while(m<=0);
	
	for(int i=0;i<m;i++){
		printf("Nhap phan tu thu A[%d]: ",i+1);
		scanf("%d",&A[i]);
		if(A[i]%2==0){
			tichA*=A[i];
		}
	}
	do{
		printf("Nhap so luong phan tu cua mang B: ");
		scanf("%d",&n);
	}while(n<=0);
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu B[%d]: ",i+1);
		scanf("%d",&B[i]);
		if(B[i]%2==0){
			tichB*=B[i];
		}
	}
	printf("Tich cac phan tu chan cua mang A va B: %d\n",tichA*tichB);
	printf("Giao cua A va B: ");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(A[i]==B[j]){
				printf(" %d ",A[i]);
				break;
			}
		}
	}
	printf("\n");
	free(A);
	free(B);
}
