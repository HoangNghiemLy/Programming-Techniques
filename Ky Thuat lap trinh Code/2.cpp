#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf ("Nhap so phan tu cua mang:");
	scanf("%d", &n);
	if (n<=0){
		printf("So phan tu khong hop le!!");
		return 0;
	}
	int*A=(int*) malloc (n*sizeof(int));
	int*B=(int*) malloc (n*sizeof(int));
	int max=0;
	for (int i=0;i<n;i++){
	    printf("Nhap phan tu thu %d cua mang A: ", i+1);
	    scanf("%d", &A[i]);
    }

	for (int i=0;i<n;i++){
		printf("Nhap phan tu tu %d cua mang B: ", i+1);
		scanf("%d",&B[i]);
	}
	printf("Tong cua hai mang: \n");
	int sum=0;
	for (int i=0;i<n;i++){
		sum+=A[i]+B[i];
	}
	printf("\nTong:%d",sum);
	free(A);
	free(B);
	return 0;
}
