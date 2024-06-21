#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Nhap vao so nguyen n (1 <= n <= 25): ");
    scanf("%d", &n);

    if (n < 1 || n > 25) {
        printf("Nhap sai gia tri n.\n");
        return 0;
    }

    int result = fibonacci(n);
    printf("So Fibonacci thu %d la: %d\n", n, result);

    return 0;
}
