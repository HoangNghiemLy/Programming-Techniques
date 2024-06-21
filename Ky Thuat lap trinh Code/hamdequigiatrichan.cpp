#include <stdio.h>
#define MAX 100
int largest_even(int arr[], int n, int i, int max) {
    if (i < 0) {
        return max;
    }
    if (arr[i] % 2 == 0 && arr[i] > max) {
        max = arr[i];
    }
    return largest_even(arr, n, i-1, max);
}

int main() {
	int n;
	int arr[10];
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\nNhap gia tri thu %d: ",i+1);
		n = sizeof(arr) / sizeof(arr[0]);
    int max = largest_even(arr, n, n-1, -1);
    if (max == -1) {
        printf("Mang khong co so chan.");
    } else {
        printf("Gia tri chan lon nhat trong mang la %d.", max);
    }
}
    
    
    return 0;
}
