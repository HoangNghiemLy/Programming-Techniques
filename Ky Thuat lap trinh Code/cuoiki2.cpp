#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    int *A, *B;

    printf("Nhap so luong phan tu mang A: ");
    scanf("%d", &n);

    // Cấp phát vùng nhớ động cho mảng A
    A = (int*) malloc(n * sizeof(int));

    printf("Nhap cac gia tri cua mang A:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Nhap so luong phan tu mang B: ");
    scanf("%d", &m);

    // Cấp phát vùng nhớ động cho mảng B
    B = (int*) malloc(m * sizeof(int));

    printf("Nhap cac gia tri cua mang B:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    // Giao của A và B
    printf("Giao cua mang A va B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
                break;
            }
        }
    }
    printf("\n");

    // Hợp của A và B
    printf("Hop cua mang A va B:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    for (int j = 0; j < m; j++) {
        int found = 0;
        for (int i = 0; i < n; i++) {
            if (B[j] == A[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d ", B[j]);
        }
    }
    printf("\n");

    // Hiệu của A và B
    printf("Hieu cua mang A va B:\n");
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d ", A[i]);
        }
    }
    printf("\n");

    // Giải phóng vùng nhớ đã cấp phát
    free(A);
    free(B);

    return 0;
}
