#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 40

// Định nghĩa cấu trúc sản phẩm
struct Product {
    char maSP[6];    // Mã sản phẩm
    char tenSP[51];   // Tên sản phẩm
    float donGia;     // Đơn giá
    int soLuong;      // Số lượng
};

void nhapDanhSach(struct Product danhSach[], int &n) {
    printf("Nhap so luong san pham (toi da 40): ");
    scanf("%d", &n);

    if (n > MAX_PRODUCTS) {
        printf("So luong san pham vuot qua gioi han. Chon 40 san pham dau tien.\n");
        n = MAX_PRODUCTS;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin cho san pham thu %d:\n", i + 1);
        printf("Ma san pham (5 ki tu): ");
        scanf("%s", danhSach[i].maSP);
        printf("Ten san pham (toi da 50 ki tu): ");
        scanf(" %[^\n]", danhSach[i].tenSP);
        printf("Don gia: ");
        scanf("%f", &danhSach[i].donGia);
        printf("So luong: ");
        scanf("%d", &danhSach[i].soLuong);
    }
}

void xuatDanhSach(struct Product danhSach[], int n) {
    printf("Danh sach san pham:\n");
    printf("%-10s %-20s %-10s %-10s\n", "Ma SP", "Ten SP", "Don gia", "So luong");
    for (int i = 0; i < n; i++) {
        printf("%-10s %-20s %-10.2f %-10d\n", danhSach[i].maSP, danhSach[i].tenSP,
               danhSach[i].donGia, danhSach[i].soLuong);
    }
}

void selectionSortSoLuong(struct Product danhSach[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (danhSach[j].soLuong < danhSach[minIndex].soLuong) {
                minIndex = j;
            }
        }
        // Hoan doi gia tri
        struct Product temp = danhSach[i];
        danhSach[i] = danhSach[minIndex];
        danhSach[minIndex] = temp;
    }
}

void insertionSortDonGia(struct Product danhSach[], int n) {
    int i, j;
    struct Product key;
    for (i = 1; i < n; i++) {
        key = danhSach[i];
        j = i - 1;

        // Di chuyển các phần tử lớn hơn key về sau
        while (j >= 0 && danhSach[j].donGia > key.donGia) {
            danhSach[j + 1] = danhSach[j];
            j = j - 1;
        }
        danhSach[j + 1] = key;
    }
}

void bubbleSortTenSP(struct Product danhSach[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(danhSach[j].tenSP, danhSach[j + 1].tenSP) > 0) {
                // Hoan doi gia tri
                struct Product temp = danhSach[j];
                danhSach[j] = danhSach[j + 1];
                danhSach[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Product danhSach[MAX_PRODUCTS];
    int soLuongSanPham;

    int choice;
    do {
        printf("\nMENU:\n");
        printf("1. Nhap danh sach san pham\n");
        printf("2. Xuat danh sach san pham\n");
        printf("3. Sap xep theo so luong (Selection Sort)\n");
        printf("4. Sap xep theo don gia (Insertion Sort)\n");
        printf("5. Sap xep theo ten san pham (Bubble Sort)\n");
        printf("6. Thoat\n");

        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapDanhSach(danhSach, soLuongSanPham);
                break;
            case 2:
                xuatDanhSach(danhSach, soLuongSanPham);
                break;
            case 3:
                selectionSortSoLuong(danhSach, soLuongSanPham);
                printf("Danh sach sau khi sap xep theo so luong:\n");
                xuatDanhSach(danhSach, soLuongSanPham);
                break;
            case 4:
                insertionSortDonGia(danhSach, soLuongSanPham);
                printf("Danh sach sau khi sap xep theo don gia:\n");
                xuatDanhSach(danhSach, soLuongSanPham);
                break;
            case 5:
                bubbleSortTenSP(danhSach, soLuongSanPham);
                printf("Danh sach sau khi sap xep theo ten san pham:\n");
                xuatDanhSach(danhSach, soLuongSanPham);
                break;
            case 6:
                printf("Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long nhap lai.\n");
        }
    } while (choice != 6);

    return 0;
}
