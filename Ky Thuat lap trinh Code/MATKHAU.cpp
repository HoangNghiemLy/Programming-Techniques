#include <stdio.h>

int main() {
    int k;

    // Nhập số lượng học sinh
    printf("Nhap so luong hoc sinh: ");
    scanf("%d", &k);

    // Tạo tệp MATKHAU.INP để ghi dữ liệu
    FILE *inputFile = fopen("MATKHAU.INP", "w");

    // Ghi số lượng học sinh vào tệp
    fprintf(inputFile, "%d\n", k);

    // Nhập và ghi danh sách các số
    printf("Nhap danh sach cac so: ");
    for (int i = 0; i < k; i++) {
        int number;
        scanf("%d", &number);
        fprintf(inputFile, "%d ", number);
    }

    // Đóng tệp MATKHAU.INP
    fclose(inputFile);

    return 0;
}

