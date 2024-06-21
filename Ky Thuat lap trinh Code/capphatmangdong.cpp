#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Nhap so luong truong: ");
    scanf("%d", &n);

    // Kiem tra tinh hop le cua du lieu nhap vao
    if (n <= 0) {
        printf("So luong truong khong hop le!\n");
        return 1; // Tra ve 1 de bao loi khi ket thuc chuong trinh
    }

    // Cap phat bo nho dong cho mang A de chua so luong tiem chung cua n truong
    int *A = (int*) malloc(n * sizeof(int));
    if (A == NULL) {
        printf("Khong du bo nho de cap phat!\n");
        return 1;
    }

    // Nhap so luong tiem chung cua n truong
    int i;
    for (i = 0; i < n; i++) {
        printf("Nhap so luong tiem chung cua truong thu %d: ", i + 1);
        scanf("%d", &A[i]);

        // Kiem tra tinh hop le cua du lieu nhap vao
        if (A[i] < 0) {
            printf("So luong tiem chung khong hop le!\n");
            free(A); // Giai phong bo nho dong da cap phat
            return 1;
        }
    }

    // Tinh tong so luong tiem chung va gia tri trung binh
    int sum = 0;
    float average;
    for (i = 0; i < n; i++) {
        sum += A[i];
    }
    average = (float) sum / n;

    // In ket qua
    printf("Tong so luong tiem chung la: %d\n", sum);
    printf("Gia tri trung binh cua so luong tiem chung la: %.2f\n", average);

    // Giai phong bo nho dong da cap phat
    free(A);

    return 0; // Ket thuc chuong trinh thanh cong
}
